#include <iostream>
#include <vector>

using namespace std;


class Grid {
private:
    vector<char> grid;
    map<int,bool> safeSpots;
    map<int, pair<int,int>> piecePositions;
public:
    Grid() {

        grid = vector<char>(52, '.');
        safeSpots = {{0,true},{8,true},{13,true},{21,true},{26,true},{34,true},{39,true},{47,true}};
    }

    void placePiece(int pos, char symbol, int player, int piece) {
        grid[pos] = symbol;
        piecePositions[pos] = {player,piece};
    }

    void removePiece(int pos) {
        grid[pos] = '.';
        piecePositions.erase(pos);
    }

    pair<int,int> pieceAt(int pos){
        return piecePositions[pos];
    }
    void displayGrid() {
        for (const auto& row : grid) {
            for (const auto& cell : row) {
                cout << cell << " ";
            }
            cout << endl;
        }
    }

    bool isOccupied(int pos){
        return grid[pos] != '.';
    }

    bool isSafeSpot(int x, int y){
        return safeSpots.find(x*grid[0].size() + y) != safeSpots.end();
    }
};

class Player {
private:
    string color;
    vector<int> pieces;

public:
    Player(string clr) : color(clr) {
        pieces = vector<int>(4, -1);
    }

    string getColor() {
        return color;
    }

    int movePiece(int pieceIndex, int steps) {
        if(pieces[pieceIndex] == -1 && steps == 6){
            pieces[pieceIndex] = 0;
        }
        pieces[pieceIndex] += steps;
        return pieces[pieceIndex];
    }

    bool checkWin() {
        for (const auto& piece : pieces) {
            if (piece < 51) {
                return false;
            }
        }
        return true;
    }

    void killPiece(int pieceIndex) {

        pieces[pieceIndex] = -1; 
    }
};


class LudoGame {
private:
    vector<Player> players;
    int currentPlayerIndex;

    int currentRoll;

    int RollDice(){
        return rand() % 6 + 1;
    }

public:
    LudoGame(){
        
        vector<string> colors = {"Red", "Blue", "Green", "Yellow"};
        for (const auto& color : colors) {
            players.emplace_back(color);
        }
        currentPlayerIndex = 0;
    }
    LudoGame(vector<string> colors) {
        
        for (const auto& color : colors) {
            players.emplace_back(color);
        }
        currentPlayerIndex = 0; 
    }


    void playGame() {
        Grid grid;
        bool gameWon = false;

        while (!gameWon) {

            cout << "Current player: " << players[currentPlayerIndex].getColor() << endl;

            currentRoll = RollDice();
            cout << "Current roll: " << currentRoll << endl;

            if(checkAnyLegalMoves()){
                cout<<"Please select a piece to move: ";
                int pieceIndex;
                cin>>pieceIndex;
                grid.removePiece(players[currentPlayerIndex].pieces[pieceIndex]);
                int newLocation = players[currentPlayerIndex].movePiece(pieceIndex,currentRoll);
                if(!grid.isSafeSpot(newLocation) && grid.isOccupied(newLocation)){
                    int otherPlayer = grid.pieceAt(newLocation).first;
                    int otherPiece = grid.pieceAt(newLocation).second;
                    players[otherPlayer].killPiece(otherPiece);
                    grid.removePiece(newLocation);
                }grid.placePiece(newLocation,players[currentPlayerIndex].getColor()[0],currentPlayerIndex,pieceIndex);
                grid.displayGrid();
            }else{
                cout<<"No legal moves available. Skipping turn."<<endl;
            }
            if(players[currentPlayerIndex].checkWin()){
                cout<<"Player "<<players[currentPlayerIndex].getColor()<<" has won!"<<endl;
                gameWon = true;
            }

            currentPlayerIndex = (currentPlayerIndex + 1) % players.size();
        }
    }
};

int main() {
    vector<string> colors = {"Red", "Blue", "Green", "Yellow"};
    LudoGame game(colors);
    game.playGame();
    return 0;
}

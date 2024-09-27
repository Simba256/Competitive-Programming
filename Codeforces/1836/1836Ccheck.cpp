#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void printDifferences(const vector<pair<int, string>>& differences) {
    for (const auto& diff : differences) {
        cout << "Difference found at line " << diff.first << ":\n";
        cout << "File 1: " << diff.second << "\n";
    }
}

vector<pair<int, string>> findDifferences(const string& file1, const string& file2) {
    ifstream f1(file1);
    ifstream f2(file2);

    if (!f1.is_open() || !f2.is_open()) {
        cout << "Error opening files!\n";
        return {};
    }

    string line1, line2;
    int lineNumber = 1;
    vector<pair<int, string>> differences;

    while (!f1.eof() || !f2.eof()) {
        getline(f1, line1);
        getline(f2, line2);

        if (line1 != line2) {
            differences.push_back({lineNumber, line1});
        }

        lineNumber++;
    }

    f1.close();
    f2.close();
    return differences;
}

int main() {
    string file1 = "outt1.txt";
    string file2 = "outt2.txt";

    vector<pair<int, string>> differences = findDifferences(file1, file2);

    if (differences.empty()) {
        cout << "The files " << file1 << " and " << file2 << " are exactly the same.\n";
    } else {
        cout << "The files " << file1 << " and " << file2 << " have differences:\n";
        printDifferences(differences);
    }

    return 0;
}

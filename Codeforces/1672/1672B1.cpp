using namespace std;
#include<iostream>
int main(){
    int t,ca,cb,ta,tb;
    char last='A';
    cin>>t;
    string arr[t];
    for(int i=0;i<t;i++) cin>>arr[i];
    for(int i=0;i<t;i++){
        if(arr[i].length()<2){
            cout<<"NO"<<i<<"first"<<endl;
            break;
        }
        ta=0;
        tb=0;
        for(int j=0;j<arr[i].length();j++){
            if(arr[i][j]=='A') ta++;
            else tb++;
            if(arr[i][j]==last){
                if(arr[i][j]=='A') {
                    ca++;
                    // last='A';
                }
                else {
                    cb++;
                    // last='B';
                }
            }
            else if(last=='B'){
                if(ca<cb) {
                    cout<<"NO"<<i<<"second"<<endl;
                    break;
                }
                ca=0;
                cb=0;
                last='A';
            }
            else if(last=='A'){
                last='B';
                cb++;
            }
            else if(j==arr[i].length()-1){
                if(ta<tb) cout<<"NO"<<i<<"third"<<endl;
                cout<<"YES"<<i<<endl;
            }
            else last='B';
        }
    }
    return 0;
}
/*
4
AABAB
ABB
AAAAAAAAB
A
*/

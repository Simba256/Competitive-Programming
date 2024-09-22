using namespace std;
#include<bits/stdc++.h>

int solve(){
    string a[8];
    for(int i=0;i<8;i++){
        cin>>a[i];
    }
    // cout<<"All inputs done"<<endl;
    for(int i=1;i<7;i++){
        for(int j=1;j<7;j++){
            if(a[i][j]=='#' && a[i-1][j-1]=='#' && a[i+1][j-1]=='#' && a[i-1][j+1]=='#' && a[i+1][j+1]=='#'){
                cout<<i+1<<" "<<j+1<<endl;
                return 1;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}

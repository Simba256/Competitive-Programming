using namespace std;
#include<bits/stdc++.h>
void solve(){
    int n;
    cin>>n;
    if(n>1){
        for(int i=2;i<=n;i++){
            cout<<i<<" ";
        }
    }
    cout<<1<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

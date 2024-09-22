using namespace std;
#include<bits/stdc++.h>
void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<0<<" "<<0<<" "<<(n/2)<<endl;
    }
    else cout<<-1<<endl;
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}

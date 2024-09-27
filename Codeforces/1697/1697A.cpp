using namespace std;
#include<iostream>
void solve(){
    int n,m,a,sum=0;
    cin>>n>>m;
    for(int j=0;j<n;j++){
        cin>>a;
        sum+=a;
    }
    if (sum-m>0) cout<<sum-m<<endl;
    else cout<<0<<endl;
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}

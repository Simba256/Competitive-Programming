using namespace std;
#include<bits/stdc++.h>
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a&&b&&c&&d){
        cout<<2<<endl;
    }
    else if(a+b+c+d==0){
        cout<<0<<endl;
    }
    else cout<<1<<endl;
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}

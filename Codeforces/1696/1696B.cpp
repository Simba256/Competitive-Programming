using namespace std;
#include<bits/stdc++.h>
void solve(){
    int a,n;
    cin>>n;
    int s=0,e=0,rs=0; //s=started
    for (int i=0;i<n;i++){
        cin>>a;
        if(a!=0){
            s=1;
        }
        if(a==0 && s==1){
            e=1;
        }
        if(a!=0 && e==1){
            rs=1;
        }
    }
    if(s==0) cout<<0<<endl;
    else if(s==1 && rs==0) cout<<1<<endl;
    else cout<<2<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

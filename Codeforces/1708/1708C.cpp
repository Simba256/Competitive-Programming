using namespace std;
#include<bits/stdc++.h>
void solve(){
    int n,q,b;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>b;
        cout<<"n= "<<n<<" q= "<<q<<" b= "<<b<<endl;
        if (b>q && q>1){
            cout<<1<<" ";
            q-=1;
        }
        else if(b>q && q==1 && i==n-1){
            cout<<1<<" ";
            q-=1;
        }
        else if (b<=q){
            cout<<1<<" ";
        }
        else cout<<0<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

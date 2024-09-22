using namespace std;
#include<bits/stdc++.h>

#define forn(a,b) for (int b=0;b<a;b++)

void solve(){
    int a,b,d,m=-1000000001,r,c;
    cin>>a>>b;
    forn(a,i){
        forn(b,j){
            cin>>d;
            if(d>m){
                m=d;
                r=i;
                c=j;
            }
        }
    }
    // cout<<"r="<<r<<" c="<<c<<endl;
    cout<<max(r+1,a-r)*max(c+1,b-c)<<endl;
    // cout<<(a/2+1)*(b/2+1)<<endl;
}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}

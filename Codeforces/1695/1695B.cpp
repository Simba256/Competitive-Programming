using namespace std;
#include<bits/stdc++.h>

#define forn(a,b) for (int a=0;a<b;a++)

void solve(){
    int n,a,me=1000000001,ei,mo=1000000001,oi;
    cin>>n;
    // int a[n];
    forn(i,n){
        cin>>a;
        if(i%2==1 && a<mo) {
            mo=a;
            oi=i;
        }
        else if(i%2==0 && a<me){
            me=a;
            ei=i;
        }
    }
    // cout<<"ei="<<ei<<" oi="<<oi<<endl;.
    if (n%2) cout<<"Mike"<<endl;
    else if(me<mo) cout<<"Joe"<<endl;
    else if(mo<me) cout<<"Mike"<<endl;
    else if(ei<oi) cout<<"Joe"<<endl;
    else cout<<"Mike"<<endl;

}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}

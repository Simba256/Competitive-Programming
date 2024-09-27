using namespace std;
#include<bits/stdc++.h>

int solve(){
    int a,b,c=0,d=0,e=1; //c=0 counter, d = 1 counter
    cin>>a>>b;
    while(c<a && d<b){
        cout<<e;
        if (e) {
            d++;
            e=0;
        }
        else {
            c++;
            e=1;
        }
        // e=~e;
    }
    if(c==a){
        while(d<b){
            cout<<1;
            d++;
        }
    }
    else{
        while(c<a){
            cout<<0;
            c++;
        }
    }
    cout<<endl;
    // cout<<" c="<<c<<" d="<<d<<endl;


}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}

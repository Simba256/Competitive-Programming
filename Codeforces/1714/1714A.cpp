using namespace std;
#include<iostream>
// #include<bits/stdc++.h>
void solve(){
    int n,h,m,a,b,c=100,d;
    cin>>n>>h>>m;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if((a>h && a<c) || (a==h && b>=m && b<=d) ||(a==c && b<=d && a>=h && a>=m)){
            c=a;
            d=b;
            // cout<<"in if c="<<c<<" d="<<d<<endl;
        }
        else{
            // cout<<"in else"<<endl;
            a+=24;
            if((a>h && a<c) || (a==h && b>=m && b<=d) ||(a==c && b<=d && a>=h && a>=m)){
                c=a;
                d=b;
            }
            // cout<<"in else c="<<c<<" d="<<d<<endl;
        }
    }
    if(d-m<0){
        d+=60;
        c-=1;
    }
    cout<<c-h<<" "<<d-m<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

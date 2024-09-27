using namespace std;
#include<iostream>
// #include<bits/stdc++.h>
void solve(){
    int n,h,m,a,b,c=100,d;
    cin>>n>>h>>m;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        a-=h;
        b-=m;
        if(a<0){
            a+=24;
            if(b<0){
                b+=60;
                a--;
            }
        }
        else if(a==0 && b<0){
            b+=60;
            a+=23;
        }
        else if(b<0){
            b+=60;
            a--;
        }
        // cout<<"a="<<a<<" b="<<b<<endl;
        if(a<c){
            c=a;
            d=b;
        }
        else if(a==c && b<d){
            c=a;
            d=b;
        }
    }
    // if(d-m<0){
    //     d+=60;
    //     c-=1;
    // }
    cout<<c<<" "<<d<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

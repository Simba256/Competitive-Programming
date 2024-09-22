using namespace std;
#include<iostream>
// #include<bits/stdc++.h>
int solve(){
    int n,a,b[n-1];
    cin>>n>>a;
    if(a==0){
        // cout<<"in if"<<endl;
        // if(b!=0) {
        //     cout<<"NO"<<endl;
        //     return 0;
        // }
        for(int i=0;i<n-1;i++) cin>>b[i];
        for(int i=0;i<n-1;i++){
            if(b[i]>0){
                cout<<"NO"<<endl;
                return 2;
            }
        }
    }
    else{
        // cout<<"in else"<<endl;
        for(int i=0;i<n-1;i++) cin>>b[i];
        for(int i=0;i<n-1;i++){
            if(b[i]%a){
                cout<<"NO"<<endl;
                return 2;
            }
        }
    }
    cout<<"YES"<<endl;
    return 1;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

using namespace std;
#include<iostream>
// #include<bits/stdc++.h>
void solve(){
    int n,b,out=-1;
    cin>>n;
    int a[n+1]={0};
    for(int i=0;i<=n;i++){
        a[i]=-1;
    }
    for(int i=0;i<n;i++){
        cin>>b;
        if(a[b]!=-1) {
            if(a[b]>out) out=a[b];
            a[b]=i;
        }
        else a[b]=i;
    }
    cout<<out+1<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

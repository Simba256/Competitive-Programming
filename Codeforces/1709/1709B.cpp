using namespace std;
#include<bits/stdc++.h>
long long up[99999],down[99999],n;
void solve(){
    int s,t;
    cin>>s>>t;
    // cout<<
    if(s<t) {
        if(s==1) cout<<up[t-2]<<endl;
        else cout<<up[t-2]-up[s-2]<<endl;
    }
    else {
        if(s==n) cout<<down[t-1]<<endl;
        else cout<<down[t-1]-down[s-1]<<endl;
    }
}
int main(){
    int m;
    cin>>n>>m;
    int a[n];
    cin>>a[0]>>a[1];
    if(a[0]>a[1]) up[0]=a[0]-a[1];
    else up[0]=0;
    for(int i=2;i<n;i++){
        cin>>a[i];
        if(a[i]<a[i-1]) up[i-1]=up[i-2]+a[i-1]-a[i];
        else up[i-1]=up[i-2]+0;
    }
    if(a[n-2]<a[n-1]) down[n-2]=a[n-1]-a[n-2];
    else down[n-2]=0;
    for(int i=n-2;i>0;i--){
        if(a[i-1]<a[i]) down[i-1]=down[i]+a[i]-a[i-1];
        else down[i-1]=down[i]+0;
    }
    // cout<<"Done everything"<<endl;
    // for(int i=0;i<n-1;i++) cout<<up[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<n-1;i++) cout<<down[i]<<" ";
    // cout<<endl;
    for(int i=0;i<m;i++){
        solve();
    }
    return 0;
}

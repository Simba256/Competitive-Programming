using namespace std;
#include<bits/stdc++.h>

void solve(){
    int n,k,b,ans=0;
    cin>>n>>k;
    int a[n]={0};
    // for(int i=0;i<n;i++){
    //     cout<<a[i];
    // }
    // cout<<endl;
    for(int i=0;i<n;i++){
        cin>>b;
        if(k!=1){
            a[i]+=b;
            if(i!=0) a[i-1]-=b;
            if(i!=n-1) a[i+1]-=b;
        }
    }
    if(k==1){
        cout<<(n-1)/2<<endl;
    }
    // for(int i=0;i<n;i++){
    //     cout<<a[i];
    // }
    // cout<<endl;
    else{
        for(int i=1;i<n-1;i++){
            if(a[i]>0) ans+=1;
        }
        cout<<ans<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

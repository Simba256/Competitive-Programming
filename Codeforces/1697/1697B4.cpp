#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,q,a;
    cin>>n>>q;
    long long dp[n]={0};
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    int l=v.size();
    dp[0]=v[l-1];
    for(int i=l-2;i>=0;i--){
        dp[l-i-1]=dp[l-i-2]+v[i];
    }

    int x,y;
    for(int i=0;i<q;i++){
        cin>>x>>y;
        if(x==y) cout<<dp[x-1]<<endl;
        else cout<<dp[x-1]-dp[x-y-1]<<endl;
    }
    // for(auto x:v) cout<<x<<" ";
    return 0;
}

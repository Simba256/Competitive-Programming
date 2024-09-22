using namespace std;
#include<bits/stdc++.h>
int solve(){
    int n,m,k,sum=0,Y=0;
    cin>>n>>m>>k;
    int a[k];
    for(int i=0;i<k;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]>=m*n) Y=1;
    }
    if(sum<m*n) {
        cout<<"No"<<endl;
        return 0;
    }
    else if(Y==1) {
        cout<<"Yes"<<endl;
        return 0;
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

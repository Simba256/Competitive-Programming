using namespace std;
#include<bits/stdc++.h>
void solve(){
    int a[4],count=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    int j=a[0];
    while(a[j]!=0){
        // cout<<"j="<<j<<" a[j]="<<a[j]<<" count="<<count<<endl;
        count++;
        j=a[j];
    }
    // cout<<"here"<<endl;
    if (count==2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

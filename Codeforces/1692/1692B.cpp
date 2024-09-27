using namespace std;
#include<bits/stdc++.h>

void solve(){
    int n,a,c=0;
    cin>>n;
    map<int, int> map;
    for(int i=0;i<n;i++){
        cin>>a;
        if (map[a]==1) c++;
        else map[a]++;
        // cout<<"n="<<n<<" c="<<c<<endl;
    }
    // cout<<"n="<<n<<" c="<<c<<endl;
    if(c%2==0) cout<<n-c<<endl;
    else cout<<n-c-1<<endl;
}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}

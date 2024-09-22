#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,z,c,a,max=0;
    cin>>n>>z;
    // std::vector<int> v;
    // cout<<"n="<<endl;
    // for(int i=0;i<n;i++){
        // cout<<"i="<<i<<endl;
        // v.push_back(c);
    // }
    // cout<<"All inputs taken"<<endl;
    for(int i=0;i<n;i++){
        cin>>c;
        a=c|z;
        if(a>max){
            max=a;
        }
    }
    // cout<<"or loop traversed"<<endl;
    cout<<max<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

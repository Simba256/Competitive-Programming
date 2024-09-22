using namespace std;
#include<iostream>

void solve(){
    int n,m;
    long long sum;
    cin>>n>>m;
    sum=(float(m)/2)*(n*(n+1)+m-1);
    cout<<sum<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

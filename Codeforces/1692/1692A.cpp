using namespace std;
#include<bits/stdc++.h>

int solve(){
    int t,a,c=0;
    cin>>t;
    for(int i=0;i<3;i++){
        cin>>a;
        if(a>t) c++;
    }
    cout<<c<<endl;
}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}

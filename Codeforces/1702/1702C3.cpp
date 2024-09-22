using namespace std;
#include<bits/stdc++.h>

int solve(){
    int n,k;
    cin>>n>>k;
    int a;
    map<int, pair<int , int>> m; //m=name
    for(int i=0;i<n;i++){
        cin>>a;
        if(m.count(a)==0){
            m[a].first=i;
            m[a].second=i;
        }
        else{
            m[a].second=i;
        }
    }
    int b,c;
    for(int i=0;i<k;i++){
        cin>>b>>c;
        if(m.count(b)>0 && m.count(c)>0 && m[b].first<m[c].second){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}

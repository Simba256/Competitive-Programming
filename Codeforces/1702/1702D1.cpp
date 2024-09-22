using namespace std;
#include<bits/stdc++.h>

int solve(){
    string s;
    cin>>s;
    int p;
    cin>>p;
    vector<char> v(s.begin(), s.end());
    sort(v.begin(),v.end());
    int sum=0;
    for(auto x:v) sum+=x-'a'+1;
    // cout<<sum<<endl;
    map<char, int> del;
    int i=v.size()-1;
    while(sum>p){
        del[v[i]]++;
        sum-=v[i]-'a'+1;
        i--;
    }

    for(auto x:s) {
        if(del[x]>0){
            del[x]--;
            continue;
        }
        else{
            cout<<x;
        }
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}

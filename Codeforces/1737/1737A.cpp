using namespace std;
#include<bits/stdc++.h>

#define rep(l, r, i) for (int i = l; i < r; ++i)
#define nl cout<<'\n'
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)

void solve(){
    int n,k;
    string s;
    cin>>n>>k>>s;
    int l = n/k;
    int m[26]={0};
    rep(0,n,i){
        m[s[i]-'a']++;
    }
    rep(0,k,j){
        int f=0;
        for(char a = 'a';a-'a'<min(l,25);a++){
            if(m[a-'a']){
                m[a-'a']--;
            }else if(!f){
                cout<<char(a);
                f=1;
            }
            if(a-'a'==l-1 && !f){
                cout<<++a;
            }
        }
    }
}

int main(){
    tcs
    {
        solve(); nl;
    }
    return 0;
}

/*





*/

using namespace std;
#include<bits/stdc++.h>
#include <cstdio>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define db(n) cout<<"here "<<n<<", "; //for debugging
#define dbb(n) cout<<#n<<" = "<<n<<"\n"
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" ";
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
#define mp 1000000007
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;



void solve(){
    string s;
    cin>>s;
    ll n,c=0,up=0,o,e;
    n=s.size();
    char mi,ma;
    mi=s[0];
    ma=s[n-1];
    if(ma<mi) swap(ma,mi);

    map<char,vi>m;
    rep(0,n,i){
        if(s[i]>=mi && s[i]<=ma){
            c++;
            m[s[i]].push_back(i+1);
        }
    }
    cout<<ma-mi<<" "<<c;nl;
    if(s[0]==mi){
        for(auto &my:m){
            print(my.second);
        }
    }
    else{
        for(char a=s[0];a>=s[n-1];a--){
            print(m[a]);
        }
    }
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("consecutive_cuts_chapter_2_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       solve();nl;
       // cout<<solve();nl;
       // cout<<"Case #"<<i+1<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/

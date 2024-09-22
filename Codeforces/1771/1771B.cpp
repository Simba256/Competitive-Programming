using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vp vector<pair<int,int>>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define db(n) cout<<"here "<<n<<", "; //for debugging
#define dbb(n) cout<<#n<<" = "<<n<<nl;
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define sod(a) sort(a.begin(), a.end(), greater<int>())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
const ll MOD1=1e9+7;
const ll MOD2=998244353;
#define pi 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;
#define printm(a) for(auto &x:a) {cout<<x.first<<" "<<x.second;nl;}
#define pii pair<int,int>
#define mp(a,b) make_pair(a,b)
#define pb push_back
#define all(a) a.begin(),a.end()
ll mod=MOD1;
ll po(ll x,ll y,ll _prime=mod) {if(y<0)return 0;y%=(_prime-1);ll res=1;while(y>0){if(y&1)res=(res*x)%_prime;x=(x*x)%_prime;y>>=1;}return (res%_prime);}
int gcd(int a, int b){if(a<b) swap(a,b);if(b==0) return a;return gcd(a%b,b);}

void solve(){
    ll n,m;
    cin>>n>>m;
    // vll v;
    // rep(0,n,i) v.pb(i+1);
    ve<vb> nf(n+1,vb(n+1));
    ll x,y;
    std::map<ll, vll> ma;
    rep(0,m,i){
        cin>>x>>y;
        nf[x][y] = 1;
        nf[y][x] = 1;
        ma[x].pb(y);
    }
    rep(1,n+1,i){
        rep(i+2,n+1,j){
            // nf[i][j] = nf[i][j] + nf[i][j-1] + nf[j-1][j];
            // nf[j][i] = 1;
            if((!count(all(ma[i]),j))&&(count(all(ma[i]),j-1)||count(all(ma[j-1]),j))) ma[i].pb(j);
        }
    }
    ll ct=0;
    rep(1,n+1,i){
        ct+=n-i+1-ma[i].size();
        // cout<<i<<":";
        // print(ma[i]);
    }
    // rep(1,n+1,i){
    //     rep(1,n+1,j){
    //         if(!(nf[i][j])){
    //             count++;
    //             // cout<<i<<" "<<j;nl;
    //         }
    //     }
    // }
    cout<<ct;
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       solve();nl;
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/

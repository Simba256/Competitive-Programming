#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef double dd;
typedef long double ldd;

#define forn(a,b) for (int ii=a;ii<b;ii++)
#define hhh cout<<"here"<<endl;
#define nl cout<<'\n'
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vp vector<pair<int,int>>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define so(v) sort(v.begin(),v.end())
#define sod(a) sort(a.begin(), a.end(), greater<int>())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
const ll MOD1=1e9+7;
const ll MOD2=998244353;
#define PI 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;
#define print(a) for(auto &i: a) cout<<i<<" "; nl;
#define printm(a) for(auto &x:a) {cout<<x.first<<" "<<x.second;nl;}
#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()
#define db(n) cout<<"here "+n<<endl;
#define dbb(n) cout<<#n+" = "+n<<endl;
#define DB(n) cout << "$^" << n << "|$"<<endl
#define sp <<" "+
#define Random(rng) mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define pii pair<int,int>
#define fi first
#define se second
#define mp(a, b) make_pair(a, b)
int gcd(int a, int b){int tmp;while(b != 0){tmp = a;a = b;b = tmp%b;}return a;}
ll mod=MOD1;
ll po(ll x,ll y,ll _prime=mod) {if(y<0)return 0;y%=(_prime-1);ll res=1;while(y>0){if(y&1)res=(res*x)%_prime;x=(x*x)%_prime;y>>=1;}return (res%_prime);}
vll seivePrimes(ll n){vll pr,p;p.resize(n+1);fill(2+p.begin(),p.end(),1);for(ll i=2;i<=n;i++){if(p[i]==1){pr.push_back(i);for(ll j=i*i;j<=n;j+=i){p[j] = 0;}}}return pr;}

void solve(){
    ll n,m,k,d;
    cin>>n>>m>>k>>d;
    vvll v(n,vll(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    vvll dp(n,vll(m));
    int j;
    vector<multiset<ll>> s(n);
    for(int i=0;i<n;i++) dp[i][0] = 1;
    for(int i=0;i<n;i++){
        for(j=1;j<=min(m-1,d+1);j++){
            // print(dp[i]);
            dp[i][j] = v[i][j] + 1 + dp[i][0];
            s[i].insert(dp[i][j]);
            // cout<<"i:"<<i<<" j:"<<j<<" cmin:"<<cmin[i]<<" csmin:"<<csmin[i]<<" dp[i][j]:"<<dp[i][j];nl;
        }
    }for(int i=0;i<n;i++){
        for(int jj = j;jj<m;jj++){
            // print(dp[i])
            dp[i][jj] = *s[i].begin() + v[i][jj] + 1;
            s[i].insert(dp[i][jj]);
            s[i].erase(s[i].find(dp[i][jj-(d+1)]));
            // cout<<"i:"<<i<<" jj:"<<jj<<" cmin:"<<cmin[i]<<" csmin:"<<csmin[i]<<" dp[i][jj]:"<<dp[i][jj];nl;
        }
    }
    // cout<<"dp:\n";
    // for(int i=0;i<n;i++){
    //     for(j=0;j<m;j++)
    //     cout<<dp[i][j]<<" ";nl;
    // }nl;
    ll cans = 0;
    for(int i=0;i<k;i++){
        cans += dp[i][m-1];
    }
    ll aannss = cans;
    for(int i=k;i<n;i++){
        cans += dp[i][m-1] - dp[i-k][m-1];
        aannss = min(aannss,cans);
    }cout<<aannss;
}

int main(){
    fastio;
    // ++(int)0;// crash
    //freopen("in.txt","r",stdin);
    //freopen("outt.txt","w+",stdout);
    tcs
    {
         // cout<<"Case #"<<TTTT<<": ";
        solve(); nl;
    }
    return 0;
}

/*
1
3 11 1 4
0 1 2 3 4 5 4 3 2 1 0
0 1 2 3 2 1 2 3 3 2 0
0 1 2 3 5 5 5 5 5 2 0


*/
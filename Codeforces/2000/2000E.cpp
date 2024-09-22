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
    ll n,m,k, w;
    cin>>n>>m>>k>>w;
    vll v(w);
    for(int i=0;i<w;i++) cin>>v[i];
    sod(v);

    map<ll,ll, greater<int>> mapp;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){ 
            ll x = min(min(min(i+1, n-i), n-k+1),k);
            ll y = min(min(min(j+1, m-j), m-k+1),k);
            mapp[x*y]++;
            // cout<<"("<<x<<","<<y<<"),";
        }
    }

    ll ans = 0;
    ll ind = 0;
    bool break_all = false;
    for(auto ppair:mapp){
        for(ll i=0;i<ppair.second;i++){
            if(ind == w){
                break_all = true;
                break;
            }ans += v[ind]*ppair.first;
            // cout<<v[ind]<<'*'<<ppair.first;nl;
            ind++;
        }if(break_all) break;
    }cout<<ans;
}

int main(){
    fastio;
    #ifdef LOCAL
    // ++(int)0;// crash
    freopen("./../in.txt","r",stdin);
    freopen("./../out.txt","w+",stdout);
    #endif
    tcs
    {
         // cout<<"Case #"<<TTTT<<": ";
        solve(); nl;
    }
    return 0;
}

/*


2




1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1









1  2  3  4  5  6  7  7  7  6  5  4  3  2  1
2  4  6  8 10 12 14 14 14 12 10  8  6  4  2
3  6  9 12 15 18 21 21 21 18 15 12  9  6  3
4  8 12 16 20 24 28 28 28 24 20 16 12  8  4
5 10 15 20 25 30 35 35 35 30 25 20 15 10  5
6 12 18 24 30 36 42 42 42 36 30 24 18 12  6
7 14 21 28 35 42 49 49 49 42 35 28 21 14  7
7 14 21 28 35 42 49 49 49 42 35 28 21 14  7
7 14 21 28 35 42 49 49 49 42 35 28 21 14  7
7 14 21 28 35 42 49 49 49 42 35 28 21 14  7
7 14 21 28 35 42 49 49 49 42 35 28 21 14  7
7 14 21 28 35 42 49 49 49 42 35 28 21 14  7
7 14 21 28 35 42 49 49 49 42 35 28 21 14  7
7 14 21 28 35 42 49 49 49 42 35 28 21 14  7
6 12 18 24 30 36 42 42 42 36 30 24 18 12  6
5 10 15 20 25 30 35 35 35 30 25 20 15 10  5
4  8 12 16 20 24 28 28 28 24 20 16 12  8  4
3  6  9 12 15 18 21 21 21 18 15 12  9  6  3
2  4  6  8 10 12 14 14 14 12 10  8  6  4  2
1  2  3  4  5  6  7  7  7  6  5  4  3  2  1


*/
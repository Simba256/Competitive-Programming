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


struct pair_hash {
    template <class T1, class T2>
    std::size_t operator()(const std::pair<T1, T2>& p) const {
        auto hash1 = std::hash<T1>{}(p.first);
        auto hash2 = std::hash<T2>{}(p.second);
        // Combine the two hashes.
        return hash1 ^ (hash2 << 1);
    }
};


ll knapSackRec(ll W,ll x, vector<ll>& wt, vector<ll>& val, ll index, unordered_map<pair<ll,ll>,ll,pair_hash>& dp)
{
    // base condition
    if (index < 0)
        return 0;
    if (dp.count({index,W}))
        return dp[{index,W}];

    if (wt[index] > W) {
        // Store the value of function call stack in table before return
        dp[{index,W}] = knapSackRec(min(W,(index-1)*x),x, wt, val, index - 1, dp);
        return dp[{index,W}];
    }
    else {
        // Store value in a table before return
        dp[{index,W}] = max(val[index] + knapSackRec(min(W - wt[index],(index-1)*x),x, wt, val, index - 1, dp),
                           knapSackRec(min((index-1)*x,W),x, wt, val, index - 1, dp));

        // Return value of table after storing
        return dp[{index,W}];
    }
}

ll knapSack(ll X, vector<ll>& wt, vector<ll>& val, ll n)
{
    // Create the table dynamically
    
    unordered_map<pair<ll,ll>,ll, pair_hash> dp;

    return knapSackRec(X*(n-1),X, wt, val, n - 1, dp);
}

void solve(){
    ll  m,x;
    cin>>m>>x;
    vll c(m),h(m);
    for(int i=0;i<m;i++) cin>>c[i]>>h[i];
    cout<<knapSack(x,c,h,m);    
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

\
#include <bits/stdc++.h>
using namespace std;

// Returns the value of maximum profit
int knapSackRec(int W, vector<int>& wt, vector<int>& val, int index, vector<vector<int>>& dp)
{
    // base condition
    if (index < 0)
        return 0;
    if (dp[index][W] != -1)
        return dp[index][W];

    if (wt[index] > W) {
        // Store the value of function call stack in table before return
        dp[index][W] = knapSackRec(W, wt, val, index - 1, dp);
        return dp[index][W];
    }
    else {
        // Store value in a table before return
        dp[index][W] = max(val[index] + knapSackRec(W - wt[index], wt, val, index - 1, dp),
                           knapSackRec(W, wt, val, index - 1, dp));

        // Return value of table after storing
        return dp[index][W];
    }
}

int knapSack(int W, vector<int>& wt, vector<int>& val, int n)
{
    // Create the table dynamically
    vector<vector<int>> dp(n, vector<int>(W + 1, -1));

    return knapSackRec(W, wt, val, n - 1, dp);
}

// Driver Code
int main()
{
    vector<int> profit = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int W = 50;
    int n = profit.size();
    cout << knapSack(W, weight, profit, n);
    return 0;
}



*/
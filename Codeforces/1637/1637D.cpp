using namespace std;
#include<bits/stdc++.h>

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
#define db(n) cout<<"here "<<n<<endl;
#define dbb(n) cout<<#n<<" = "<<n<<endl;
#define DB(n) cout << "$^" << n << "|$"<<endl
#define sp <<" "<<
#define Random(rng) mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define pii pair<int,int>
#define fi first
#define se second
#define mp(a, b) make_pair(a, b)
int gcd(int a, int b){int tmp;while(b != 0){tmp = a;a = b;b = tmp%b;}return a;}
ll mod=MOD1;
vll seivePrimes(ll n){vll pr,p;p.resize(n+1);fill(2+p.begin(),p.end(),1);for(ll i=2;i<=n;i++){if(p[i]==1){pr.push_back(i);for(ll j=i*i;j<=n;j+=i){p[j] = 0;}}}return pr;}

void solve(){
    int n;
    cin>>n;
    vi a,b;
    inp(a,n);
    inp(b,n);
    int sa = 0,sb = 0;
    rep(0,n,i){
        sa += a[i];
        sb += b[i];
    }
    // rep(0,n,i){
    //     if(sa*a[i]+sb*b[i]>(sa-a[i]+b[i])*b[i]+(sb-b[i]+a[i])*a[i]){
    //         sa += b[i] - a[i];
    //         sb += a[i] - b[i];
    //         swap(a[i],b[i]);
    //     }
    // }

    if(sa-sb==0){
        ll ans = 0;
        rep(0,n,i){
            rep(i+1,n,j){
                ans += (a[i]+a[j])*(a[i]+a[j]) + (b[i]+b[j])*(b[i]+b[j]);
            }
        }
        cout<<ans;
        return;
    }
    db(1);
    vp d(n);
    rep(0,n,i) d[i] = {a[i] - b[i],i};
    so(d);
    int in = -1,f=0;
    rep(0,n,i){
        if(d[i].first<=sa-sb) in = i;
        if(d[i].first==sa-sb){
            f = 1;
        }
    }
    db(2);
    if(f){
        swap(a[in],b[in]);
    }else{
        swap(a[in],b[in]);
        if(in<n-1) swap(a[in+1],b[in+1]);
    }
    ll ans = 0;
    rep(0,n,i){
        rep(i+1,n,j){
            ans += (a[i]+a[j])*(a[i]+a[j]) + (b[i]+b[j])*(b[i]+b[j]);
        }
    }
    db(3);
    cout<<ans;
    return;
    // vvi dp(n,vi(sa-sb,100000000));
    //
    //
    //
    //
    //
    // std::vector<vvi> dp(2,vvi(n,vi(n,100000000)));
    // dp[0][0][0] = sa*a[0] + sb*b[0];
    // dp[1][0][0] = sa
    //
    // dp[0][0] = ans;
    // dp[i][j] = min(dp[])
    //
    // dp[0] = ans;
    //
    // rep(1,n,i){
    //     int m = ans;
    //     rep(0,i,j){
    //         m = min(m,dp[i]);
    //
    //     }
    // }
}

int main(){
    // fastio;
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





*/

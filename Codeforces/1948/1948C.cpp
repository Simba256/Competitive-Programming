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

void dfs(ve<string> &v,ve<vvll> &dp,ll n, ll i, ll j,ll state){
    // cout<<"i:"<<i<<" j:"<<j<<" state:"<<state;nl;
    // for(int ii=0;ii<2;ii++){
    //     for(int jj=0;jj<n;jj++){
    //         if(i==ii && j==jj) cout<<"#";
    //         else cout<<".";
    //     }nl;
    // }
    if(state==1){
        if(dp[i][j][0]) return;
        dp[i][j][0] = 1;
        if(v[i][j]=='<') j--;
        else j++;
        dfs(v,dp,n,i,j,2);
        // v[i][j]
    }else if(state==2){
        if(dp[i][j][1]) return;
        dp[i][j][1] = 1;
        if(j>0){
            dfs(v,dp,n,i,j-1,1);
        }if(j<n-1){
            dfs(v,dp,n,i,j+1,1);
        }
        dfs(v,dp,n,(i+1)%2,j,1);
    }
}


void solve(){
    ll n;
    cin>>n;
    ve<string> v(2);
    cin>>v[0]>>v[1];
    ve<vvll> dp(2,vvll(n,vll(2,0)));
    dfs(v,dp,n,0,0,2);
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<dp[i][j][0]<<","<<dp[i][j][1]<<" ";
    //     }nl;
    // }
    if(dp[1][n-1][0]||dp[1][n-1][1]) cout<<"YES";
    else cout<<"NO";
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
1
4
>>><
>><<


*/
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
ll po(ll x,ll y,ll _prime=mod) {if(y<0)return 0;y%=(_prime-1);ll res=1;while(y>0){if(y&1)res=(res*x)%_prime;x=(x*x)%_prime;y>>=1;}return (res%_prime);}
vll seivePrimes(ll n){vll pr,p;p.resize(n+1);fill(2+p.begin(),p.end(),1);for(ll i=2;i<=n;i++){if(p[i]==1){pr.push_back(i);for(ll j=i*i;j<=n;j+=i){p[j] = 0;}}}return pr;}


bool findv(ve<string> &v, ll n, ll m, ll st, ll &ans){
    for(int j=st,k=st+1;j>=0&&k<m;j--,k++){
        for(int i=0;i<n;i++){
            if(v[i][j]!=v[i][k]) return 0;
        }
    }ans += st+1;
    return 1;
}

bool findh(ve<string> &v, ll n, ll m, ll st, ll &ans){
    for(int j=st,k=st+1;j>=0&&k<n;j--,k++){
        for(int i=0;i<m;i++){
            if(v[j][i]!=v[k][i]) return 0;
        }
    }ans += 100*(st+1);
    return 1;
}

void solve(ll &ans){
    ll n,m;
    cin>>n>>m;
    ve<string> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    // cout<<n<<" "<<m;nl;
    for(int i=0;i<m-1;i++){
        if(findv(v,n,m,i,ans)) ;    
        if(i==m-1){cout<<"!11";nl;}
    }for(int i=0;i<n-1;i++){
        if(findh(v,n,m,i,ans)) ;
        if(i==n-1) {cout<<"!11";nl;}
        
    }
    // if(!findv(v,n,m,0,ans))
    // if(!findv(v,n,m,m-1,ans)) 
    // if(!findv(v,n,m,m/2,ans))
    // if(!findv(v,n,m,m/2-1,ans))
    // cin>>n>>m;
    // cout<<n<<" "<<m;nl;
    // ve<string> vv(n);
    // for(int i=0;i<n;i++) cin>>vv[i];
    // for(int i=0;i<n-1;i++){
    //     if(findh(vv,n,m,i,ans)) break;
    //     if(i==n-1) {cout<<"!11";nl;}
        
    // }for(int i=0;i<m-1;i++){
    //     if(findv(vv,n,m,i,ans)) break;    
    //     if(i==m-1){cout<<"!11";nl;}
    // }
    // for(int i=0;i<n;i++) cin>>v[i];
    // if(findh(v,n,m,n-1,ans))
    // if(findh(v,n,m,n/2,ans))
    // if(findh(v,n,m,n/2-1,ans))
    //  {/*cout<<"!11";nl;*/}
}

int main(){
    // fastio;
    // ++(int)0;// crash
    freopen("c13.txt","r",stdin);
    //freopen("outt.txt","w+",stdout);
    // auto start_time = std::chrono::high_resolution_clock::now();
    int T;
    ll ans = 0;
    cin>>T;
    // T=2;
    for(int i=0;i<T;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve(ans); nl;
    }cout<<"ans:"<<ans;nl;
    // auto end_time = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
    // std::cout << "Time taken by function: " << duration.count()/(1000.0*1000.0) << " seconds" << std::endl;
    return 0;
}

/*





*/

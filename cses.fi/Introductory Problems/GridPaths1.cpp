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
#define vp vector<pair<ll,ll>>
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

ve<char> m(4);
vp val(4);
ll ccount = 0;

void generateAllCombinations(vc &v, ll &i, ll &j, ve<vll> &vis, ll &len,string &s){
    // cout<<"here";nl;
    // cout<<"i:"<<i<<" j:"<<j<<" len:"<<len<<" v: ";
    //     for(auto x:v) cout<<x;nl;
    if(len==48){
        // cout<<"i:"<<i<<" j:"<<j;
        // cout<<" v: ";
        // for(auto x:v) cout<<x;nl;
        ll viss = 1;
        for(int p=0;p<7;p++){
            for(int q=0;q<7;q++) viss &= vis[p][q];
        }
        if(i==6 && j==0 && viss){
            ccount++;
            // cout<<"found something:"<<ccount;nl;

        } 
        return;
    }ve<bool> cars(4); // D L U R
    if(i==0) cars[2] = 1;
    if(i==6) cars[0] = 1;
    if(j==0) cars[1] = 1;
    if(j==6) cars[3] = 1;
    for(int k=0;k<4;k++){
        if(((i+val[k].first>-1)&&(i+val[k].first<7)&&(j+val[k].second>-1)&&(j+val[k].second<7)&&vis[i+val[k].first][j+val[k].second]) || cars[k]) continue;
        if(s[len]=='?'||s[len]==m[k]){
            v.pb(m[k]);
            vis[i+val[k].first][j+val[k].second] = 1;
            ll ii = i+val[k].first,jj = j+val[k].second, llen = len+1;
            generateAllCombinations(v,ii,jj,vis,llen,s);
            v.pop_back();
            vis[i+val[k].first][j+val[k].second] = 0;
        }
    }return;
}

void solve(){
    vc empty;
    vvll vis(7,vll(7));
    vis[0][0] = 1;
    string s;
    cin>>s;
    ll i = 0, j = 0, len = 0;
    generateAllCombinations(empty,i,j,vis,len,s);
    cout<<ccount;
}

int main(){
    // fastio;
    // ++(int)0;// crash
    //freopen("in.txt","r",stdin);
    //freopen("outt.txt","w+",stdout);
    // auto start_time = std::chrono::high_resolution_clock::now();
    m[0] = 'D';
    m[1] = 'L';
    m[2] = 'U';
    m[3] = 'R';
    val[0] = {1,0};
    val[1] = {0,-1};
    val[2] = {-1,0};
    val[3] = {0,1};
    {
        // cout<<"Case #"<<TTTT<<": ";
        solve(); nl;
    }
    // auto end_time = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
    // std::cout << "Time taken by function: " << duration.count()/(1000.0*1000.0) << " seconds" << std::endl;
    return 0;
}

/*





*/

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


bool customComparator(pair<string,pair<ll,ll>> a, pair<string,pair<ll,ll>> b) {
    // Define your custom sorting logic here
    // For example, sorting in descending order
    std::map<char, int> charToValue = {
        {'A', 14},
        {'K', 13},
        {'Q', 12},
        {'J', 1},
        {'T', 10},
        {'9', 9},
        {'8', 8},
        {'7', 7},
        {'6', 6},
        {'5', 5},
        {'4', 4},
        {'3', 3},
        {'2', 2}
    };
    if(a.second.second==b.second.second){
        for(int i=0;i<5;i++){
            if(a.first[i]==b.first[i]) continue;
            else return charToValue[a.first[i]] < charToValue[b.first[i]];
        }
    }else return a.second.second < b.second.second;
}

void solve(){
    ll n = 1000;
    string s;
    ll num,ans;
    ve<pair<string,pair<ll,ll>>> v;
    rep(0,n,i){
        map<char,ll> m;
        cin>>s;
        cin>>num;
        for(int j=0;j<5;j++){
            m[s[j]]++;
        } ll ma = 0;
        char mac;
        for(int j=0;j<5;j++){
            for(auto y:m){
                if(y.second>ma && y.first!='J'){
                    ma = y.second;
                    mac = y.first;
                }
            } 
        }cout<<"mac:"<<mac;nl;
        while(m['J']>0 && mac!='J'){
            cout<<"here";nl;
            m['J']--;
            m[mac]++;
        }ll x = 0;
        for(auto y:m){
            x += y.second*y.second;
        }v.push_back({s,{num,x}});
    }sort(v.begin(),v.end(),customComparator);
    ans = 0;
    for(int i=0;i<n;i++){
        ans += (i+1)*v[i].second.first;
        cout<<v[i].first<<" "<<v[i].second.second;nl;
    }cout<<ans;
}

int main(){
    fastio;
    // ++(int)0;// crash
    freopen("Day7.txt","r",stdin);
    // freopen("outt.txt","w+",stdout);
    // auto start_time = std::chrono::high_resolution_clock::now();
    
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

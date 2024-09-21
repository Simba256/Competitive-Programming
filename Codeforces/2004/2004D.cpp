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


vector<int> convert(string s){
    vector<int> vec(4);  // blue, green, red, yellow    
    if(s[0]=='B') vec[0] = 1;
    if(s[0]=='G' || s[1]=='G') vec[1] = 1;
    if(s[0]=='R' || s[1]=='R') vec[2] = 1;
    if(s[1]=='Y') vec[3] = 1;
    return vec;
}

int calc(set<int> &s, int x, int y){
    int ans = 1e9;
    if(x > y) swap(x, y);
    
    // Handle the upper bound
    auto it = s.upper_bound(x);
    if(it != s.end()) {
        ans = min(ans, abs(x - *it) + abs(*it - y));
    }

    // Handle the lower bound
    it = s.lower_bound(y);
    if(it != s.begin()) {
        --it; // Decrement only if not at the beginning
        ans = min(ans, abs(y - *it) + abs(*it - x));
    }

    return ans;
}



void solve(){
    ll n,q;
    cin>>n>>q;
    ve<string> v(n+1);
    map<vector<int>, set<int>> m;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        vector<int> vec = convert(v[i]);
        m[vec].insert(i);
    }
    for(int i=0;i<q;i++){
        int x, y;
        cin>>x>>y;
        vi vec1, vec2;
        vec1 = convert(v[x]);
        vec2 = convert(v[y]);
        bool direct = 0;
        for(int i=0;i<4;i++){
            if(vec1[i]==vec2[i]) direct = 1;
        }if(direct){
            cout<<abs(x-y);nl;
            continue;
        }int ans = 1e9;
        for(int j=0;j<4;j++){
            if(!vec1[j]) continue;
            for(int k=0;k<4;k++){
                if(!vec2[k]) continue;
                vi vec3(4);
                vec3[j] = 1;
                vec3[k] = 1;
                // cout<<j<<" "<<k;nl;
                ans = min(ans, calc(m[vec3],x, y));
            }
        }if(ans==1e9) cout<<-1<<'\n';
        else cout<<ans<<'\n';
    }


}

int main(){
    // fastio;
    #ifdef LOCAL
    // ++(int)0;// crash
    freopen("./../../in.txt","r",stdin);
    freopen("./../../out.txt","w+",stdout);
    #endif
    tcs
    {
         // cout<<"Case #"<<TTTT<<": ";
        solve();
    }
    return 0;
}

/*


*/
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

void permute(map<string,bool> &m,string s,int n, int in){
    m[s] = 1;
    if(in==n-1) return;
    for(int i=0;i<n;i++){
        swap(s[i],s[in]);
        m[s] = 1;
        permute(m,s,n,in+1);
        swap(s[i],s[in]);
    }
}

vvll permutations(vvll &v, ll n){
    vvll nv(v.size()*n);
    ll c = 0;
    for(auto x:v){
        for(int i=0;i<n;i++){
            for(int j=0,k=0;k+j<n;j++){
                if(j==i && k==0){
                    j--;k++;
                    nv[c].pb(n);
                }else nv[c].pb(x[j]);
            }c++;
        }
    }return nv;
}

vvll permutations(ll n){
    vvll v(1);
    v[0].pb(1);
    for(int i=2;i<=n;i++){
        v = permutations(v,i);
    }return v;
}

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    vll v(26);
    for(int i=0;i<n;i++) v[s[i]-'a']++;
    string ns = "";
    for(int i=0;i<26;i++) for(int j=0;j<v[i];j++) ns += char(i+'a');
    map<string, bool> m;
    // permute(m,ns,n,0);

    // ll n;
    // cin>>n;

    vvll vv = permutations(n);
    // cout<<"s:"<<vv.size();nl;
    // cout<<"permutations:";nl;
    for(auto x:vv){
        string a = "";
        for(auto y:x){
            a += ns[y-1];
        }m[a] = 1;
    }cout<<m.size()<<'\n';
    for(auto x:m) cout<<x.first<<'\n';
}

int main(){
    fastio;
    // ++(int)0;// crash
    // freopen("in.txt","r",stdin);
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

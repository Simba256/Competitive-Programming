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

void solve(){
    ve<string> v(2);
    cin >> v[0] >> v[1];
    ll t,q;
    cin>>t>>q;
    queue<pair<ll,ll>> qu;
    ll ct = 0;
    ll l0 = v[0].length();
    rep(0,l0,i){
        if(v[0][i]!=v[1][i]) ct++;
    }ll x,y,a,b,c,d;
    rep(0,q,i){
        // cout<<"i:"<<i<<" ct:"<<ct;nl;
        // unblock
        // if(!qu.empty()) cout<<"queue:{"<<qu.front().fi<<","<<qu.front().se<<"}\n";
        if(!(qu.empty()) && qu.front().fi==i){
            y = qu.front().se;
            qu.pop();
            if(v[0][y-1]!=v[1][y-1]) ct++;
        }cin>>x;
        if(x==1){
            cin>>y;
            // block y
            if(v[0][y-1]!=v[1][y-1]) ct--;
            qu.push({i+t,y});
        }else if(x==2){
            cin>>a>>b>>c>>d;
            if(v[a-1][b-1]!=v[c-1][d-1]){
                if(v[a-1][b-1]==v[a%2][b-1]) ct++;
                else{
                    if(v[c-1][d-1]==v[a%2][b-1]) ct--;
                }
                if(v[c-1][d-1]==v[c%2][d-1]) ct++;
                else{
                    if(v[a-1][b-1]==v[c%2][d-1]) ct--;
                }
            }
            swap(v[a-1][b-1],v[c-1][d-1]);
            // change count
        }else{
            // cout<<"ct:"<<ct;
            if(ct==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }






}

int main(){
    fastio;
    // ++(int)0;// crash
    //freopen("in.txt","r",stdin);
    //freopen("outt.txt","w+",stdout);
    tcs
    {
        // cout<<"Case #"<<TTTT<<": ";
        solve();
    }
    return 0;
}

/*





*/

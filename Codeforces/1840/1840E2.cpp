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
    string a,b;
    ll t,q;
    cin>>a>>b>>t>>q;
    queue<pair<ll,ll>> qu;
    ll diff = 0,f = 0;
    ll n = a.length();
    if(a.length()!= b.length()) f = 1;
    ll x;
    rep(0,n,i) if(a[i]!=b[i]) diff++;
    rep(0,q,i){
        // cout<<"i:"<<i<<" diff:"<<diff;nl;
        if(!qu.empty() && qu.front().se==i){
            x = qu.front().fi;
            if(a[x-1]!=b[x-1]) diff++;
            qu.pop();
        }
        cin>>x;
        if(x==3){
            if(f || diff) cout<<"NO";
            else cout<<"YES";
            nl;
        }else if(x==1){
            cin>>x;
            // cout<<"a[x]:"<<a[x]<<" b[x]:"<<b[x];nl;
            if(a[x-1]!=b[x-1]) diff--;
            qu.push({x,i+t});
        }else{
            ll aa,bb,cc,dd;
            cin>>aa>>bb>>cc>>dd;
            char s1,s2,s3,s4;
            if(aa==1){
                s1 = a[bb-1];
                s3 = b[bb-1];
            }else{
                s1 = b[bb-1];
                s3 = a[bb-1];
            }if(cc==1){
                s2 = a[dd-1];
                s4 = b[dd-1];
            }else{
                s2 = b[dd-1];
                s4 = a[dd-1];
            }if(s1==s2) continue;
            if(s1==s3) diff++;
            else if(s2==s3) diff--;
            if(s2==s4) diff++;
            else if(s1==s4) diff--;
            if(aa==1 && cc==1) swap(a[bb-1],a[dd-1]);
            if(aa==1 && cc==2) swap(a[bb-1],b[dd-1]);
            if(aa==2 && cc==1) swap(b[bb-1],a[dd-1]);
            if(aa==2 && cc==2) swap(b[bb-1],b[dd-1]);
        }
    }
}

int main(){
    fastio;
    // ++(int)0;// crash
    //freopen("in.txt","r",stdin);
    //freopen("outt.txt","w+",stdout);
    ll xxx = 0;
    tcs
    {
        // cout<<"Case #"<<TTTT<<": ";
        solve();
    }
    return 0;
}

/*





*/

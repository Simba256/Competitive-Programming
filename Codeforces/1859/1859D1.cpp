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
    ll n;
    cin>>n;
    vll l(n),r(n),a(n),b(n);
    ve<pair<ll,ll>> seg(n);
    rep(0,n,i){
        cin>>l[i]>>r[i]>>a[i]>>b[i];
        seg[i] = {l[i],b[i]};
    }so(seg);
    ve<pair<ll,ll>> sseg;
    sseg.pb(seg[0]);
    ll in = 0;
    rep(1,n,i){
        if(seg[i].fi<=sseg[in].se) sseg[in].se = max(sseg[in].se,seg[i].se);
        else{
            sseg.pb(seg[i]);
            in++;
        }
    }ll q, x;
    ll len = sseg.size();
    // for(int i=0;i<len;i++){
    //     cout<<sseg[i].fi<<" "<<sseg[i].se;nl;
    // }
    cin>>q;
    rep(0,q,i){
        cin>>x;
        ll le = 0, ri = len-1;
        ll mid = le + (ri-le)/2;
        while(le<=ri){ // .. < <=
            // cout<<le<<" "<<mid<<" "<<ri<<" "<<x;nl;
            if(sseg[mid].fi<=x && sseg[mid].se>=x){
                cout<<sseg[mid].se<<" ";
                break;
            }if(mid>0 && sseg[mid-1].se<x && sseg[mid].fi>x){
                cout<<x<<" ";
                break;
            }if(mid==0 && sseg[0].fi>x){
                cout<<x<<" ";
                break;
            }if(mid<(len-1) && sseg[mid+1].fi>x && sseg[mid].se<x){
                cout<<x<<" ";
                break;
            }if(mid==(len-1) && sseg[len-1].se<x){
                cout<<x<<" ";
                break;
            }if(sseg[mid].se<x){
                le = mid + 1;
            }if(sseg[mid].fi>x){
                ri = mid - 1;
            }mid = le + (ri-le)/2;
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
        solve(); nl;
    }
    return 0;
}

/*
1
5
18 24 18 24
1 8 2 4
11 16 14 14
26 32 28 30
5 10 6 8
9
15 14 13 27 22 17 31 1 7

1 4
5 8
11 14
18 24
26 30




*/

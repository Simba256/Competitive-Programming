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

void solve(){
    ll a,b,n,m;
    cin>>a>>b>>n>>m;
    vp x(n), y(n);
    for(int i=0;i<n;i++){
        cin>>x[i].fi>>x[i].se;
        y[i].fi = x[i].se;
        y[i].se = x[i].fi;
    } 
    so(x);
    so(y);
    map<pair<ll,ll>,ll> vis;
    for(int i=0;i<n;i++) swap(y[i].fi,y[i].se);
    char c;ll k;
    ll xs = 0, xe = n-1, ys = 0, ye = n-1;
    ll rs = 0, re = a-1, cs = 0, ce = b-1; 
    ll p1 = 0, p2 = 0;
    for(int i=0;i<m;i++){
        cin>>c>>k;
        if(c=='U'){
            if(i%2){
                rs += k;
                for(;xs<=xe;xs++){
                    if(x[xs].fi<=rs){
                        if(vis.count(x[xs])) continue;
                        else{
                            vis[x[xs]] = 1;
                            p2++;
                        } 
                    }else break;
                }
            }else{
                rs += k;
                for(;xs<=xe;xs++){
                    if(x[xs].fi<=rs){
                        if(vis.count(x[xs])) continue;
                        else{
                            vis[x[xs]] = 1;
                            p1++;
                        } 
                    }else break;
                }
            }
        }else if(c=='D'){
            // cout<<"here";
            if(i%2){
                re -= k;
                for(;xs<=xe;xe--){
                    if(x[xe].fi>re+1){
                        if(vis.count(x[xe])) continue;
                        else{
                            vis[x[xe]] = 1;
                            p2++;
                        } 
                    }else break;
                }
            }else{
                // cout<<"here2";
                re -= k;
                for(;xs<=xe;xe--){
                    if(x[xe].fi>re+1){
                        if(vis.count(x[xe])) continue;
                        else{
                            vis[x[xe]] = 1;
                            p1++;
                        } 
                    }else break;
                }
            }
        }else if (c=='R'){
            if(i%2){
                ce -= k;
                for(;ys<=ye;ye--){
                    if(y[ye].se>ce+1){
                        if(vis.count(y[ye])) continue;
                        else{
                            vis[y[ye]] = 1;
                            p2++;
                        } 
                    }else break;
                }
            }else{
                ce -= k;
                for(;ys<=ye;ye--){
                    if(y[ye].se>ce+1){
                        if(vis.count(y[ye])) continue;
                        else{
                            vis[y[ye]] = 1;
                            p1++;
                        } 
                    }else break;
                }
            }
        }else if(c=='L'){
            if(i%2){
                cs += k;
                for(;ys<=ye;ys++){
                    if(y[ys].se<=cs){
                        if(vis.count(y[ys])) continue;
                        else{
                            vis[y[ys]] = 1;
                            p2++;
                        } 
                    }else break;
                }
            }else{
                cs += k;
                for(;ys<=ye;ys++){
                    if(y[ys].se<=cs){
                        if(vis.count(y[ys])) continue;
                        else{
                            vis[y[ys]] = 1;
                            p1++;
                        } 
                    }else break;
                }
            }
        }//cout<<i<<" : "<<p1<<" "<<p2;nl;
    }cout<<p1<<" "<<p2;
}

int main(){
    fastio;
    #ifdef LOCAL
    // ++(int)0;// crash
    freopen("./../in.txt","r",stdin);
    freopen("./../out.txt","w+",stdout);
    #endif
    tcs
    {
         // cout<<"Case #"<<TTTT<<": ";
        solve(); nl;
    }
    return 0;
}

/*



*/
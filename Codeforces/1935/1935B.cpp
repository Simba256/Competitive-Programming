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
    ll n;
    cin>>n;
    vll v(n);
    rep(0,n,i) cin>>v[i];
    map<ll,ll> m;
    rep(0,n,i) m[v[i]]++;
    ll mmex=0;
    ll ggcd = m[0];
    if(ggcd==0){
        cout<<n;nl;
        for(int i=0;i<n;i++) cout<<i+1<<" "<<i+1<<'\n';
        return;
    }while(m[mmex]){
        ggcd = gcd(ggcd,m[mmex]);
        mmex++;
    }if(ggcd==1){
        cout<<-1;nl;
        return;
    }vp vans;
    ll ans = ggcd;
    ll l=0,r=-1,in=0;
    map<ll,ll> mc;
    ll tot = 0;
    for(auto x:m){
        if(x.fi<mmex){
            mc[x.fi] = x.se/ggcd;
            tot += x.se/ggcd;
        }else break;
    } 
    for(int i=0;i<ans;i++){
        l = r+1;
        map<ll,ll> m1=mc;
        ll runTot = tot;
        while(runTot){
            if(v[in]<ggcd){
                m1[v[in]]--;
                runTot--;
            }
            if(m1[v[in]]==-1){
                cout<<-1;nl;
                return;
            }
            in++;
        }
        r = in-1;
        if(i==ans-1) r = n-1;
        vans.pb(mp(l+1,r+1));
    }if(vans.size()<ans){
        cout<<-1;nl;
        return;
    }else{
        cout<<ans;nl;
        for(auto x:vans){
            cout<<x.fi<<" "<<x.se;nl;
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




2
0 0
2
0 1
2
1 0
2
1 1
3
0 0 0
3
0 0 1
3
0 0 2
3
0 1 0
3
0 1 1
3
0 1 2
3
0 2 0
3
0 2 1
3
0 2 2
3
1 0 0
3
1 0 1
3
1 0 2
3
1 1 0
3
1 1 1
3
1 1 2
3
1 2 0
3
1 2 1
3
1 2 2
3
2 0 0
3
2 0 1
3
2 0 2
3
2 1 0
3
2 1 1
3
2 1 2
3
2 2 0
3
2 2 1
3
2 2 2
4
0 0 0 0
4
0 0 0 1
4
0 0 0 2
4
0 0 0 3
4
0 0 1 0
4
0 0 1 1
4
0 0 1 2
4
0 0 1 3
4
0 0 2 0
4
0 0 2 1
4
0 0 2 2
4
0 0 2 3
4
0 0 3 0
4
0 0 3 1
4
0 0 3 2
4
0 0 3 3
4



*/
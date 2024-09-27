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

void solve(int tttt){
    ll n,m,k;
    cin>>n>>m>>k;
    vll a(n), d(m), f(k);
    rep(0,n,i) cin>>a[i];
    rep(0,m,i) cin>>d[i];
    rep(0,k,i) cin>>f[i];
    if(tttt==15){
        cout<<n<<" "<<m<<" "<<k<<" ";
        rep(0,n,i) cout<<a[i]<<' ';
        rep(0,m,i) cout<<d[i]<<' ';
        rep(0,k,i) cout<<f[i]<<' ';
    }
    so(d);
    so(f);
    ll dif = 0, sdiff = 0, in = -1;
    rep(1,n,i){
        if(a[i]-a[i-1]>=dif){
            sdiff = dif;
            dif = a[i]-a[i-1];
            in = i;
        }else if(a[i]-a[i-1]>sdiff){
            sdiff = a[i]-a[i-1];
        }
    }if(dif==sdiff){
        cout<<dif;
        return;
    }

    int lower = a[in-1], upper = a[in];
    int target = (lower+upper)/2;
    ll ans = dif;
    // cout<<"lower:"<<lower<<" target:"<<target<<" upper:"<<upper;nl;
    for(int i=0;i<m;i++){
        int tt = target - d[i];
        // if(i==5) cout<<"tt:"<<tt<<'\n';;
        int l = 0, r = k-1,mid;
        if(tt<=f[0]){
            mid = 0;
        }else if(tt>=f[k-1]){
            mid = k-1;
        }else{
            while(l<r){
                mid = (l+r)/2;
                if(r-l==1 ||r==l) break;
                if(f[mid]>tt) r = mid-1;
                else if(f[mid]==tt) break;
                else l = mid;
            }
        }
        // if(d[i]==15){
        //     cout<<"d[i]:"<<d[i]<<" f[mid]:"<<f[mid];nl;
        // }
        if(mid<k-1){
            ans = min(ans, max(sdiff,max(d[i]+f[mid+1]-lower, upper-d[i]-f[mid+1])));
        }if(mid>0){
            ans = min(ans, max(sdiff,max(d[i]+f[mid-1]-lower, upper-d[i]-f[mid-1])));
        }
        ans = min(ans, max(sdiff,max(d[i]+f[mid]-lower, upper-d[i]-f[mid])));
    }
    cout<<ans;  
}

int main(){
    fastio;
    // ++(int)0;// crash
    //freopen("in.txt","r",stdin);
    //freopen("outt.txt","w+",stdout);
    tcs
    {
         // cout<<"Case #"<<TTTT<<": ";
        solve(TTTT); nl;
    }
    return 0;
}

/*

1
7 7 2
1 2 4 8 14 19 30
13 14 15 6 14 2 12
6 8 

1 7 6 5 1 14 20 22 24 29 30 14 9 7 6 17 7 19 6 5 11 2


*/
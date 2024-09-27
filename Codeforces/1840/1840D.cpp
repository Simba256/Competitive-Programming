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
vll seivePrimes(ll n){vll pr,p;p.resize(n+1);fill(2+p.begin(),p.end(),1);for(ll i=2;i<=n;i++){if(p[i]==1){pr.push_back(i);for(ll j=i*i;j<=n;j+=i){p[j] = 0;}}}return pr;}

void solve(){
    ll n;
    cin>>n;
    vll v(n);
    rep(0,n,i) cin>>v[i];;
    if(n<=3){
        cout<<0;
        return;
    }
    so(v);
    // print(v);
    ll a = 0, b = n/3, c = 2*n/3;
    ll ra = v[b-1]-v[a], rb = v[c-1] - v[b], rc = v[n-1] - v[c];
    std::map<pair<pair<ll,ll>,ll>, ll> m;
    m[{{ra,rb},rc}]++;
    ll f = 0,cc = 0;
    while(1){
        f = 0;
        // cout<<"a:"<<a<<" b:"<<b<<" c:"<<c;nl;
        while(ra>0 && max(v[b-2]-v[a],v[c-1]-v[b-1])<max(ra,rb)){
            b--;
            ra = v[b-1]-v[a]; rb = v[c-1] - v[b]; rc = v[n-1] - v[c];
            cc = 0;
            m[{{ra,rb},rc}]++;
            if(m[{{ra,rb},rc}]>3) break;
            f = 1;
        }while(rb>0 && max(v[b]-v[a],v[c-1]-v[b+1])<max(ra,rb)){
            b++;
            ra = v[b-1]-v[a]; rb = v[c-1] - v[b]; rc = v[n-1] - v[c];
            cc = 0;
            m[{{ra,rb},rc}]++;
            if(m[{{ra,rb},rc}]>3) break;
            f = 1;
        }while(rb>0 && max(v[c-2]-v[b],v[n-1]-v[c-1])<max(rc,rb)){
            c--;
            ra = v[b-1]-v[a]; rb = v[c-1] - v[b]; rc = v[n-1] - v[c];
            cc = 0;
            m[{{ra,rb},rc}]++;
            if(m[{{ra,rb},rc}]>3) break;
            f = 1;
        }while(rc>0 && max(v[c]-v[b],v[n-1]-v[c+1])<max(rc,rb)){
            c++;
            ra = v[b-1]-v[a]; rb = v[c-1] - v[b]; rc = v[n-1] - v[c];
            cc = 0;
            m[{{ra,rb},rc}]++;
            if(m[{{ra,rb},rc}]>3) break;
            f = 1;
        }

        if(ra>0 && max(v[b-2]-v[a],v[c-1]-v[b-1])==max(ra,rb)){
            b--;
            ra = v[b-1]-v[a]; rb = v[c-1] - v[b]; rc = v[n-1] - v[c];
            cc++;
            m[{{ra,rb},rc}]++;
            if(m[{{ra,rb},rc}]>3) break;
            f = 1;
        }if(rb>0 && max(v[b]-v[a],v[c-1]-v[b+1])==max(ra,rb)){
            b++;
            ra = v[b-1]-v[a]; rb = v[c-1] - v[b]; rc = v[n-1] - v[c];
            cc++;
            m[{{ra,rb},rc}]++;
            if(m[{{ra,rb},rc}]>3) break;
            f = 1;
        }if(rb>0 && max(v[c-2]-v[b],v[n-1]-v[c-1])==max(rc,rb)){
            c--;
            ra = v[b-1]-v[a]; rb = v[c-1] - v[b]; rc = v[n-1] - v[c];
            cc++;
            m[{{ra,rb},rc}]++;
            if(m[{{ra,rb},rc}]>3) break;
            f = 1;
        }if(rc>0 && max(v[c]-v[b],v[n-1]-v[c+1])==max(rc,rb)){
            c++;
            ra = v[b-1]-v[a]; rb = v[c-1] - v[b]; rc = v[n-1] - v[c];
            cc++;
            m[{{ra,rb},rc}]++;
            if(m[{{ra,rb},rc}]>3) break;
            f = 1;
        }





        // if(ra+rc==0 || ra+rb==0 || rb+rc==0) break;
        if(f==0 || cc==3) break;
    }cout<<max((ra+1)/2,max((rb+1)/2,(rc+1)/2));




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





*/

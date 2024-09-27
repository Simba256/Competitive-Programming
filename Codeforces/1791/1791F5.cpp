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

const int N = 2e5+5;

vector<ll> segTree(4*N), lazy(4*N);

void propagate(int node, int left, int right) {
    if (lazy[node] != 0) {
        segTree[node] += (right - left + 1) * lazy[node];
        if (left != right) {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }
}

void update(int node, int left, int right, int lq, int rq, ll value) {
    propagate(node, left, right);

    if (lq > right || rq < left) return;

    if (left >= lq && right <= rq) {
        segTree[node] += (right - left + 1) * value;
        if (left != right) {
            lazy[node*2] += value;
            lazy[node*2+1] += value;
        }
        return;
    }

    int mid = (left + right) / 2;
    update(node*2, left, mid, lq, rq, value);
    update(node*2+1, mid+1, right, lq, rq, value);
    segTree[node] = segTree[node*2] + segTree[node*2+1];
}

ll query(int node, int left, int right, int lq, int rq) {
    propagate(node, left, right);
    if (lq > right || rq < left) return 0;
    if (left >= lq && right <= rq) return segTree[node];
    int mid = (left + right) / 2;
    return query(node*2, left, mid, lq, rq) + query(node*2+1, mid+1, right, lq, rq);
}

ll digits(ll v,ll x){
    ll ans = 0;
    rep(0,x,i){
        ans = 0;
        while(v){
            ans += v%10;
            v/=10;
        }
        v = ans;
    }return ans;
}

ll answer(ll a,vll &done, vll &ans, vll &v,ll n){
    if(done[a]==1) return ans[a];
    else{
        ll x = query(1,1,n,a,a);
        // cout<<"a:"<<a<<" x:"<<x;nl;
        if(x>=3){
            done[a] = 1;
            ans[a] = digits(v[a],3);
            return ans[a];
        }else if(x==0){
            return v[a];
        }else return digits(v[a],x);
    }
}

ll merge(ll leftVal, ll rightVal) {
    return leftVal + rightVal;
}

void init(int node, int left, int right) {
    lazy[node] = 0;
    if (left == right) {
        segTree[node] = 0; // set default value
        return;
    }
    int mid = (left + right) / 2;
    init(node*2, left, mid);
    init(node*2+1, mid+1, right);
    segTree[node] = merge(segTree[node*2], segTree[node*2+1]);
}

void solve(){
    ll n,q;
    cin>>n>>q;
    // fill(all(segTree),0);
    // fill(all(lazy),0);
    init(1,1,n);
    vll v(n+1);
    rep(0,n,i) cin>>v[i+1];
    vll ans(n+1),done(n+1);
    // cout<<"done:";print(done);
    ll c,l,r,x;
    rep(0,q,i){
        cin>>c;
        if(c==1){
            cin>>l>>r;
            update(1,1,n,l,r,1);
        }else{
            cin>>x;
            cout<<answer(x,done,ans,v,n)<<'\n';
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





/*
10 10
1 2 3 4 5 6 7 8 9 10




*/

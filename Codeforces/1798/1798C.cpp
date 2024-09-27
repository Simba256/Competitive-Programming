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
// int gcd(int a, int b){int tmp;while(b != 0){tmp = a;a = b;b = tmp%b;}return a;}
ll mod=MOD1;
vll seivePrimes(ll n){vll pr,p;p.resize(n+1);fill(2+p.begin(),p.end(),1);for(ll i=2;i<=n;i++){if(p[i]==1){pr.push_back(i);for(ll j=i*i;j<=n;j+=i){p[j] = 0;}}}return pr;}

const int MAXN = 2e5+5;

ll n, q;
vector<int> a(MAXN);
vector<int> tree(4*MAXN);
int gcd(int x, int y) {
    if(y == 0) return x;
    return gcd(y, x % y);
}
long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

void build(int node, int start, int end) {
    if(start == end) {
        tree[node] = a[start];
    } else {
        int mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        tree[node] = gcd(tree[2*node], tree[2*node+1]);
    }
}

int query(int node, int start, int end, int l, int r) {
    if(r < start || end < l) {
        return 0; // return 0 if range outside query range
    }
    if(l <= start && end <= r) {
        return tree[node]; // return value if range inside query range
    }
    int mid = (start + end) / 2;
    int leftGcd = query(2*node, start, mid, l, r);
    int rightGcd = query(2*node+1, mid+1, end, l, r);
    return gcd(leftGcd, rightGcd); // merge values from left and right subtrees
}


void solve(){
    vector<int> b(MAXN);
    vector<int> btree(4*MAXN);
    a = b;
    tree = btree;

    cin >> n;

    vll x(n),y(n);
    for(int i=0; i<n; i++) {
        cin >> x[i] >> y[i];
        a[i] = x[i]*y[i];
    }
    build(1, 0, n-1);

    ll c = 1,start = 1, stop  = 0, ans = 0;
    rep(0,n,i){
        c = lcm(c,y[i]);
        if(query(1, 0, n-1, start, stop)%c==0) {
            stop++;
            continue;
        }
        ans++;
        c = y[i];
        start = i;
        stop = i;
        stop++;
    }
    // while(q--) {
    //     int l, r;
    //     cin >> l >> r;
    //     cout << query(1, 0, n-1, l-1, r-1) << endl; // 0-indexed
    // }
    cout<<ans;
    // return 0;.
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

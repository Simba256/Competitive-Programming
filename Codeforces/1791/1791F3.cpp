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


const int N = 1e5;  // limit for array size
int t[2 * N];
int n;

void build() {  // build the tree
  for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
}

void modify(int l, int r, int value) {
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) t[l++] += value;
    if (r&1) t[--r] += value;
  }
}


int query(int p) {
  int res = 0;
  for (p += n; p > 0; p >>= 1) res += t[p];
  return res;
}

// int main() {
//   // printf("%d\n", query(3, 11));
//   return 0;
// }





int sumDigits(int a){
    int ans = 0;
    while(a>0){
        ans += a%10;
        a/=10;
    }
    return ans;
}


void solve(){
    int q;
    cin>>n>>q;
    // scanf("%d", &n);
    vi v;
    vi done(n);
    inp(v,n);
    for (int i = 0; i < n; ++i) t[n+i]=0;
    // scanf("%d", t + n + i);
    build();
    int l,r,c,x,p,num;
    rep(0,q,i){
        cin>>c;
        if(c==1){
            cin>>l>>r;
            modify(l-1,r,1);
        }else{
            cin>>x;
            if(done[x-1]){
                cout<<v[x-1];nl;
            }else{
                if(t[n+x-1]>=3) done[x-1] = 1;
                p = min(3,query(x-1));
                num = v[x-1];
                rep(0,p,j){
                    num = sumDigits(num);
                }
                if(done[x-1]){
                    v[x-1] = num;
                }
                cout<<num;nl;
            }
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

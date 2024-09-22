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
    vll a(n),b(n);
    rep(0,n,i) cin>>a[i];
    vll preb(n);
    rep(0,n,i){
        cin>>b[i];
        if(i) preb[i] = preb[i-1] + b[i];
        else preb[0] = b[0];
    }

    vll rem(n);
    vll cnt(n);

    vll ans(n);
    // db(2);
    rep(0,n,i){
        ll av = a[i];
        cnt[i]++;
        if(i){
            av += preb[i-1];
        }
        ll l = 0, m = n/2, r = n-1;
        if(preb[n-1]<=av){}
        else if(av<=preb[0]){
            cnt[i]--;
            rem[i] += av;
        }else{
            while(l<r){
                // db(3);
                // cout<<"l:"<<l<<" m:"<<m<<" r:"<<r;nl;
                if(preb[m]<av){
                    l = m;
                    m = (r+l)/2;
                }else if(preb[m]>av){
                    r = m;
                    m = (r+l)/2;
                }else{
                    if(m<n) cnt[m+1]--;
                    break;
                }
                if(preb[l]<av && av<preb[l+1]){
                    if(l<n) cnt[l+1]--;
                    rem[l+1] += av-preb[l];
                    break;
                }
                if(preb[m]<av && av<preb[m+1]){
                    if(m<n) cnt[m+1]--;
                    rem[m+1] += av-preb[m];
                    break;
                }
                if(preb[r-1]<av && av<preb[r]){
                    if(r-1<n) cnt[r]--;
                    rem[r] += av-preb[r-1];
                    break;
                }
                if(m>0 && preb[m-1]<av && av<preb[m]){
                    if(m-1<n) cnt[m]--;
                    rem[m] += av-preb[m-1];
                    break;
                }
            }
        }
    }
    // db(1);
    ll pre = 0;
    rep(0,n,i){
        pre += cnt[i];
        cout << pre*b[i] + rem[i] << " ";
    }
}

int main(){
    // fastio;
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


    for each tea find out how many people can completely drink it using binary search

    remaining would go to the next person




*/

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
#define rep(l, r, i) for (ll i = l; i < r; ++i)
#define per(l, r, i) for (ll i = r; i >= l; --i)
#define repp(l, r, i) for (ll i = l; i <= r; ++i)
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
    ll n,c;
    cin>>n>>c;
    vll v(n);
    ve<pair<ll,ll>> co(n);
    rep(0,n,i){
        cin>>v[i];
        co[i] = {v[i] + min(i+1,n-i),i+1};
    }
    so(co);
    vll pre(n);
    pre[0] = co[0].first;
    rep(1,n,i) pre[i] = co[i].first + pre[i-1];

    ll fans = 0, ans = 0;

    rep(0,n,i){

        ll used = co[i].first+co[i].second-n-1;

        ll l = 0, r = (n-1), mid = (n+1)/2;


        // while (left <= right) {
        //     int mid = left + (right - left) / 2;
        //
        //     if (pre[mid]+used == target) {
        //         return mid;
        //     }
        //     else if (arr[mid] < target) {
        //         left = mid + 1;
        //     }
        //     else {
        //         right = mid - 1;
        //     }
        // }
        //
        while(l<r){
            // cout<<"l:"<<l<<" r:"<<r<<" i:"<<i;nl;
            if(((l<i)&&((pre[mid]+used+co[i].first)<=c))||((l>=i)&&((pre[mid]+used)<=c))) {
                l = mid+1;
            }else{
                r = mid-1;
            }
            mid = (l + r)/2;
        }
        if(l<i) ans = l+1+1;
        else ans = l+1;

        fans = max(fans,ans);

    }cout<<ans;



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

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



vvll adj;
void dfs(ll start, ll parent, vvll &adj, std::vector<ll> &depth){
    // cout<<"jere";
    for(auto x:adj[start]){
        if(x==parent) continue;
        else{
            depth[x] = depth[start] + 1;
            dfs(x,start, adj,depth);
        }
    }
}

void solve(){
    ll n;
    cin>>n;
    adj.resize(n+1);
    vll depth(n+1);
    ll a,b;
    rep(1,n,i){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        // works only if the tree is given in order of levels
        // dep[b] = dep[a] + 1;
    }
    dfs(1,0,adj,depth);
    ll end1 = 1; // first end of diameter
    for(int i=1;i<=n;i++){
        if(depth[i]>depth[end1]){
            end1 = i;
        }
    }

    vll depthend1(n+1);
    dfs(end1,0,adj,depthend1);

    ll end2 = 1;
    for(int i=1;i<=n;i++){
        if(depthend1[i]>depthend1[end2]){
            end2 = i;
        }
    }

    vll depthend2(n+1);
    dfs(end2, 0, adj, depthend2);


    vll maxDepthFromEnd(n+1);
    vll count(n+1);
    for(int i=1;i<=n;i++){
        // if( depthend1 > k ) it is connected to end1
        // if( depthend2 > k ) it is connected to end2
        // if it is connected to end1 then end2 must also be connected to end1 therefore it would be connected to both ends
        maxDepthFromEnd[i] = max(depthend1[i],depthend2[i]);
        count[maxDepthFromEnd[i]]++;
    }

    // At first we don't have any component
    // when k = 1 we have 1 component
    // when k = 2 we seperate the nodes that are at 1 distance from the ends that means number of components increases by the same amount

    // when k = n the one connected component disappers and we only have individul components
    ll ans = 0;
    for(int i=1;i<=n;i++){
        if(i==n) cout<<ans;
        else cout<<min(ans+1,n)<<" "; // 1 connected component along with all the disconnected vertices
        ans += count[i]; // adding the vertices that are too close as disconnected components
    }

}

int main(){
    // fastio;
    // ++(int)0;// crash
    //freopen("in.txt","r",stdin);
    //freopen("outt.txt","w+",stdout);

    {
        // cout<<"Case #"<<TTTT<<": ";
        solve(); nl;
    }
    return 0;
}

/*





*/

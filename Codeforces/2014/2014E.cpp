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

#define INF 1e12

void dijkstra(ll s, ll n, ve<ve<pii>> &adj, ve<ve<ll>> &dist, vll &horses){
    dist[s][0] = 0;  // Starting without a horse

    // Priority queue (min-heap) storing (distance, node, horse status)
    priority_queue< pair<ll, pair<ll, ll>>, vector<pair<ll, pair<ll, ll>>>, greater<pair<ll, pair<ll, ll>>>> pq;
    pq.push({0, {s, 0}});  // (distance, (node, horse_status))

    while(!pq.empty()){
        ll d = pq.top().first;
        ll u = pq.top().second.first;
        ll horse = pq.top().second.second;
        pq.pop();

        // If this distance is not better than the already known one, skip it
        if(d > dist[u][horse]) continue;

        // If the current node has a horse, we can transition to the "with horse" state
        if(horses[u] && !horse && dist[u][1] > dist[u][0]) {
            dist[u][1] = dist[u][0];
            pq.push({dist[u][1], {u, 1}});
        }

        // Traverse neighbors
        for(pii &neighbor : adj[u]){
            ll v = neighbor.first;
            ll w = neighbor.second;

            // If we are in the "with horse" state, the weight of the edge is halved
            if(horse) w /= 2;

            // Relaxation: if going to neighbor v results in a shorter distance
            if(dist[u][horse] + w < dist[v][horse]){
                dist[v][horse] = dist[u][horse] + w;
                pq.push({dist[v][horse], {v, horse}});
            }
        }
    }
}

void solve(){
    ll n, m, h;
    cin >> n >> m >> h;

    vll horses(n+1, 0);  // 1 if the node has a horse, 0 otherwise
    for(int i = 0; i < h; i++){
        ll hh;
        cin >> hh;
        horses[hh] = 1;
    }

    // Adjacency list for graph, each pair is (neighbor, weight)
    ve<ve<pii>> adj(n+1);
    for(int i = 0; i < m; i++){
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    // 2D distance array, dist[i][0] is without horse, dist[i][1] is with horse
    ve<ve<ll>> dist1(n+1, vll(2, INF)), distn(n+1, vll(2, INF));

    // Run Dijkstra from node 1 and from node n
    dijkstra(1, n, adj, dist1, horses);  // Dijkstra from source 1
    dijkstra(n, n, adj, distn, horses);  // Dijkstra from source n

    // for(int i = 1; i <= n; i++) cout << dist1[i][0] << " " << dist1[i][1] << " "; nl;
    // for(int i = 1; i <= n; i++) cout << distn[i][0] << " " << distn[i][1] << " "; nl;

    ll ans = INF;
    for(int i = 1; i <= n; i++){
        ll dist1_min = min(dist1[i][0], dist1[i][1]);  // Minimum distance to i from node 1
        ll distn_min = min(distn[i][0], distn[i][1]);  // Minimum distance to i from node n
        if(dist1_min == INF || distn_min == INF) continue;  // Skip unreachable nodes
        ans = min(ans, max(dist1_min, distn_min));  // Max of two minimum distances
    }

    if(ans == INF) cout << -1;
    else cout << ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifdef LOCAL
    freopen("/home/basim/Programming/CP/in.txt","r",stdin);
    freopen("/home/basim/Programming/CP/out.txt","w+",stdout);
    #endif

    // Test case input format
    tcs{
        solve();
        nl;
    }
    return 0;
}

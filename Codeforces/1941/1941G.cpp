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


// Structure to represent an edge
struct Edge {
    int v; // Destination vertex
    int color; // Color of the edge
};

// Function to perform BFS and find the minimum number of colors required to reach the destination
int bfs(int source, int destination, const vector<vector<Edge>>& graph) {
    vector<bool> visited(graph.size(), false);
    queue<pair<int, set<int>>> q; // Pair of node and set of colors
    q.push({source, {}}); // Start from source with no colors initially
    visited[source] = true;
    
    while (!q.empty()) {
        int u = q.front().first;
        set<int> colors = q.front().second;
        q.pop();
        
        if (u == destination) return colors.size(); // Reached destination, return the number of colors
        
        for (const Edge& edge : graph[u]) {
            if (!visited[edge.v]) {
                set<int> newColors = colors;
                newColors.insert(edge.color);
                q.push({edge.v, newColors});
                visited[edge.v] = true;
            }
            else if (colors.find(edge.color) == colors.end()) {
                set<int> newColors = colors;
                newColors.insert(edge.color);
                q.push({edge.v, newColors});
            }
        }
    }
    
    return -1; // Destination is not reachable
}
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<Edge>> graph(n + 1); // Graph is 1-indexed
    for (int i = 0; i < m; ++i) {
        int u, v, c;
        cin >> u >> v >> c;
        graph[u].push_back({v, c});
        graph[v].push_back({u, c});
    }
    
    int source, destination;
    cin >> source >> destination;
    
    int minColors = bfs(source, destination, graph);
        cout <<minColors ;

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
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef double dd;
typedef long double ldd;

#define forn(a, b) for (int ii = a; ii < b; ii++)
#define hhh cout << "here" << endl;
#define nl cout << '\n'
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vp vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define tcs    \
  int tttt;    \
  cin >> tttt; \
  for (int TTTT = 1; TTTT <= tttt; TTTT++)
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define so(v) sort(v.begin(), v.end())
#define sod(a) sort(a.begin(), a.end(), greater<int>())
#define inp(v, n)                          \
  {                                        \
    int aaaa;                              \
    for (int iiii = 0; iiii < n; iiii++) { \
      cin >> aaaa;                         \
      v.push_back(aaaa);                   \
    }                                      \
  }
#define mll 9223372036854775807
const ll MOD1 = 1e9 + 7;
const ll MOD2 = 998244353;
#define PI 3.14159265358979
#define prin(a, len)                       \
  rep(0, len, i) {                         \
    rep(0, len, j) cout << a[i][j] << " "; \
    nl;                                    \
  }                                        \
  nl;
#define print(a)                      \
  for (auto &i : a) cout << i << " "; \
  nl;
#define printm(a)                       \
  for (auto &x : a) {                   \
    cout << x.first << " " << x.second; \
    nl;                                 \
  }
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()
#define db(n) cout << "here " + n << endl;
#define dbb(n) cout << #n + " = " + n << endl;
#define DB(n) cout << "$^" << n << "|$" << endl
#define sp << " " +
#define Random(rng) mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define pii pair<int, int>
#define fi first
#define se second
#define mp(a, b) make_pair(a, b)
int gcd(int a, int b) {
  int tmp;
  while (b != 0) {
    tmp = a;
    a = b;
    b = tmp % b;
  }
  return a;
}
ll mod = MOD1;
ll po(ll x, ll y, ll _prime = mod) {
  if (y < 0) return 0;
  y %= (_prime - 1);
  ll res = 1;
  while (y > 0) {
    if (y & 1) res = (res * x) % _prime;
    x = (x * x) % _prime;
    y >>= 1;
  }
  return (res % _prime);
}
vll seivePrimes(ll n) {
  vll pr, p;
  p.resize(n + 1);
  fill(2 + p.begin(), p.end(), 1);
  for (ll i = 2; i <= n; i++) {
    if (p[i] == 1) {
      pr.push_back(i);
      for (ll j = i * i; j <= n; j += i) {
        p[j] = 0;
      }
    }
  }
  return pr;
}

#include <bits/stdc++.h>
using namespace std;

struct Edge {
  int i, j, U, C;  // from to capacity cost
};

vector<vector<int>> adj, cost, capacity;

const int INF = 1e9;

void shortest_paths(int n, int v0, vector<int> &d, vector<int> &p) {
  d.assign(n, INF);
  d[v0] = 0;

  vector<bool> inq(n, false);
  vector<int> count(n, 0);
  queue<int> q;

  q.push(v0);
  count[v0]++;
  p.assign(n, -1);

  while (!q.empty()) {
    int u = q.front();
    q.pop();

    inq[u] = false;

    for (int v : adj[u]) {
      if (capacity[u][v] > 0 && d[v] > d[u] + cost[u][v]) {
        d[v] = d[u] + cost[u][v];
        p[v] = u;
        if (!inq[v]) {
          inq[v] = true;
          q.push(v);
          count[v]++;
          if (count[v] > n) return;
        }
      }
    }
  }
}

// Bellman Ford
// Ford Fulkerson - Edmonds Karp
// first do this min cost fixed flow (also includes max flow)
// then read the paper then add it to the simulator

// int min_cost_flow() {
// initialize everything

// repeat until flow achieved or no path found
// find min path from s to t
// using parents and capacity find min flow in that path
// update the flow and cost

// }

// N: number of nodes, edges: edges, K: required flow (inf for max flow), s: source, t: sink
int min_cost_flow(int N, vector<Edge> &edges, int K, int s, int t) {
  adj.assign(N, vector<int>());
  cost.assign(N, vector<int>(N));
  capacity.assign(N, vector<int>(N, 0));

  for (Edge e : edges) {
    adj[e.i].push_back(e.j);
    adj[e.j].push_back(e.i);
    cost[e.i][e.j] = e.C;
    cost[e.j][e.i] = -e.C;
    capacity[e.i][e.j] = e.U;
  }

  int flow = 0, cost = 0;  // flow = total flow, cost = total cost

  while (flow < K) {
    vector<int> d, p;  // d: distances, p: parents
    shortest_paths(N, s, d, p);

    if (d[t] == INF) break;

    int current_flow = K - flow;  // initialize to remaining flow
    for (int cur = t; cur != s; cur = p[cur]) {
      current_flow = min(current_flow, capacity[p[cur]][cur]);
    }

    flow += current_flow;
    cost += d[t];

    for (int cur = t; cur != s; cur = p[cur]) {
      capacity[p[cur]][cur] -= current_flow;
      capacity[cur][p[cur]] += current_flow;
    }
  }

  if (flow < K) {
    if (K == INF) {
      //   cout << "Max flow:" << flow << endl;
      //   cout << "Min cost:" << cost << endl;
      return cost;
    } else
      return -1;
  } else
    return cost;
}

void solve() {
    ll n;
    cin>>n;
    map<ll,ll> a, b;
    vector<ll> aa,bb;
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        a[i] = x;
        aa.push_back(x);
    }for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        b[i] = x;
        bb.push_back(x);
    }

    ll required_flow = 0;
    vector<Edge> edges;
    for(int i=1;i<=n;i++){
        edges.push_back({0,i,4,1});
        if(a[i]!=i){
            edges.push_back({n+i,3*n+1, 1, 0});
            required_flow++;
        }if(b[i]!=i){
            edges.push_back({2*n+i,3*n+1, 1, 0});
            required_flow++;
        } 
        if(a[i]==i && b[i]==i) continue;
        if(a[i]==i){
            edges.push_back({i,2*n+i,1,0});
            if(b[bb[i-1]]==i) edges.push_back({i,2*n+bb[i-1], 1, 0});
        }else if(b[i]==i){
            edges.push_back({i,n+i,1, 0});
            if(a[aa[i-1]]==i) edges.push_back({i,n+aa[i-1], 1, 0});
        }else{
            edges.push_back({i,n+i,1,0});
            edges.push_back({1,2*n+i,1,0});
            if(a[aa[i-1]]==i) edges.push_back({i,n+aa[i-1], 1,0});
            if(b[bb[i-1]]==i) edges.push_back({i,2*n+bb[i-1],1,0});
        }
    }
    min_cost_flow(3*n+2, edges, required_flow, 0, 3*n+1);
    vector<ll> ans;
    for(auto edge: edges){
        if(edge.i==0 && edge.j>0 && edge.j<=n && capacity[edge.i][edge.j]<4){
            ans.push_back(edge.j);
        }
    }
    cout<<ans.size()<<endl;
    for(auto x: ans) cout<<x<<" ";

}

int main() {
  fastio;
#ifdef LOCAL
  // ++(int)0;// crash
  freopen("./../in.txt", "r", stdin);
  freopen("./../out.txt", "w+", stdout);
#endif
   {
    // cout<<"Case #"<<TTTT<<": ";
    solve();
    nl;
  }
  return 0;
}

/*



*/


// int main() {
//   int n;
//   cin >> n;
//   vector<vector<int>> a(n, vector<int>(n));
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       cin >> a[i][j];
//     }
//   }

//   vector<Edge> edges;
//   for (int i = 0; i < n; i++) {
//     edges.push_back({0, i + 1, 1, 0});
//     for (int j = 0; j < n; j++) {
//       edges.push_back({i + 1, n + j + 1, 1, a[i][j]});
//     }
//     edges.push_back({n + i + 1, 2 * n + 1, 1, 0});
//   }

//   int K = n, s = 0, t = 2 * n + 1;

//   //   cout<<"here\n";

//   cout << min_cost_flow(2 * n + 2, edges, K, s, t) << endl;

//   vector<int> ans(n + 1);
//   for (auto edge : edges) {
//     if (edge.i > 0 && edge.i <= n && edge.j > n && edge.j <= 2 * n &&
//         capacity[edge.i][edge.j] == 0)
//       ans[edge.i] = edge.j - n;
//   }
//   for (int i = 1; i <= n; i++) cout << i << " " << ans[i] << "\n";

//   return 0;
// }

/*
4
17 8 16 9
7 15 12 19
6 9 10 11
14 7 13 10



10
16 9 13 15 19 5 17 8 12 5
13 12 6 1 11 8 2 16 14 8
13 5 8 12 16 2 7 2 1 10
16 8 18 8 14 9 5 10 16 16
15 20 19 12 1 10 11 2 17 4
10 10 20 9 13 15 11 20 8 3
1 16 10 10 15 16 18 11 5 5
7 11 5 17 14 17 6 4 10 15
20 19 4 19 20 16 6 10 7 5
12 19 20 13 9 7 8 18 17 5

36
1 2
2 4
3 9
4 7
5 5
6 10
7 1
8 8
9 3
10 6

*/

// source n employees n tasks sink
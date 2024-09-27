#include <bits/stdc++.h>
using namespace std;

#define int long long

struct Edge {
  int i, j, U, C;  // from to capacity cost
};

vector<vector<int>> adj, cost, capacity;

const int INF = 1e18;

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
    cost += current_flow * d[t];

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

int32_t main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n);
  for (int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];

  int maxx = 0;
  map<pair<int, int>, int> m;
  for (int i = 0; i < n; i++) {
    if (m[{a[i], b[i]}])
      m[{a[i], b[i]}] = max(m[{a[i], b[i]}], c[i]);
    else
      m[{a[i], b[i]}] = c[i];
    maxx = max(maxx, c[i]);
  }

  vector<Edge> edges;
  for (int i = 0; i < 150; i++) {
    edges.push_back({0, i + 1, 1, 0});
    for (int j = 0; j < 150; j++) {
      if (m.find({i + 1, j + 1}) != m.end())
        edges.push_back({i + 1, 150 + j + 1, 1, maxx - m[{i + 1, j + 1}]});
    }
    edges.push_back({150 + i + 1, 301, 1, 0});
  }

  //   cout<<"here\n";
  int prev = 0;
  vector<int> answers;
  for (int i = 1; i <= n; i++) {
    min_cost_flow(302, edges, i, 0, 301);
    int ans = 0;
    for (auto edge : edges) {
      if (edge.i > 0 && edge.i <= 150 && edge.j > 150 && edge.j <= 300 &&
          capacity[edge.i][edge.j] == 0)
        ans += maxx - edge.C;
    }if(ans == prev) break;
    answers.push_back(ans);
    prev = ans;
  }
  cout<<answers.size()<<"\n";
  for(auto x:answers) cout<<x<<"\n";

  // vector<int> ans(n+1);
  // for(auto edge : edges){
  //   if(edge.i>0 && edge.i<=n && edge.j>n && edge.j<=2*n && capacity[edge.i][edge.j] == 0)
  //   ans[edge.i] = edge.j-n;
  // }for(int i=1;i<=n;i++) cout<<i<<" "<<ans[i]<<"\n";

  return 0;
}

/*

3
1 1 100
1 20 10
2 1 1


4 students

1 -> 1 , 1 , 1000000
2 -> 2 , 2 , 100000
3 -> 2 , 3, 1
4 -> 3, 2, 1

*/

// source 150 unis 150 subjects sink

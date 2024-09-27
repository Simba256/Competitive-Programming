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

bool checkSolution(int n, vector<vector<char>> &ans, vector<int> &x, vector<int> &y) {
  vector<int> x1(n, 0), y1(n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (ans[i][j] == 'X') {
        x1[i]++;
        y1[j]++;
      }
    }
  }
  return x1 == x && y1 == y;
}

int main() {
  int n;
  cin >> n;
  vector<int> x(n), y(n);

  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> x[i];
    sum += x[i];
  }
  for (int i = 0; i < n; i++) cin >> y[i];

  int maxx = 0;
  vector<vector<int>> a(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
      maxx = max(maxx, a[i][j]);
    }
  }

  vector<Edge> edges;
  for (int i = 0; i < n; i++) {
    edges.push_back({0, i + 1, x[i], 0});
    for (int j = 0; j < n; j++) {
      edges.push_back({i + 1, n + j + 1, 1, maxx - a[i][j]});
    }
    edges.push_back({n + i + 1, 2 * n + 1, y[i], 0});
  }

  int K = sum, s = 0, t = 2 * n + 1;

  //   cout<<"here\n";

  min_cost_flow(2 * n + 2, edges, K, s, t);

  vector<vector<char>> ans(n, vector<char>(n, '.'));
  int coins = 0;
  for (auto edge : edges) {
    if (edge.i > 0 && edge.i <= n && edge.j > n && edge.j <= 2 * n &&
        capacity[edge.i][edge.j] == 0) {
      coins += maxx - edge.C;
      ans[edge.i - 1][edge.j - n - 1] = 'X';
    }
  }
  if (!checkSolution(n, ans, x, y)) {
    cout << -1;
    return 0;
  }
  cout << coins << '\n';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << ans[i][j];
    }
    cout << endl;
  }

  return 0;
}

/*
5
0 1 3 2 0
1 2 2 0 1
2 5 1 5 1
0 2 5 1 2
3 8 9 3 5
1 4 3 7 3
0 3 6 2 8

*/

// source n employees n tasks sink
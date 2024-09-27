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

int main() {
  int n;
  cin>>n;
  vector<vector<int>> a(n, vector<int>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
  }

  vector<Edge> edges;
  for(int i=0;i<n;i++){
    edges.push_back({0, i+1, 1, 0});
    for(int j=0;j<n;j++){
        edges.push_back({i+1, n+j+1, 1, a[i][j]});
    }
    edges.push_back({n+i+1, 2*n+1, 1, 0});
  }


  int K = n, s = 0, t = 2*n+1;

//   cout<<"here\n";

  cout << min_cost_flow(2*n+2, edges, K, s, t) << endl;

  vector<int> ans(n+1);
  for(auto edge : edges){
    if(edge.i>0 && edge.i<=n && edge.j>n && edge.j<=2*n && capacity[edge.i][edge.j] == 0) ans[edge.i] = edge.j-n;
  }for(int i=1;i<=n;i++) cout<<i<<" "<<ans[i]<<"\n";

  return 0;
}

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
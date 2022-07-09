#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v) {
  seen[v] = true;

  for (auto next_v : G[v]) { 
    if (seen[next_v]) continue;
    dfs(G, next_v);
  }
}

int main() {
  int n;
  cin >> n;

  double sx, sy, tx, ty;

  vector<vector<double>> cs(n);
  for (int i = 0; i < n; ++i) {
    double x, y, r;
    cs[i] = { x, y, r }; 
  }

  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      double a_d = pow(cs[i][0] - cs[j][0], 2);
      double b_d = pow(cs[i][1] - cs[j][1], 2);
      double d = pow(a_d + b_d, 0.5);
      if (d > cs[i][2] + cs[j][2]) {
        continue;
      } 
      if (d == abs(cs[i][2] - cs[j][2])) {
        continue;
      }
      G[i].push_back(j);
      G[j].push_back(i);
    }
  }

  // 頂点 s がとりうる円のリスト
  vector<int> s_list;
  for (int i = 0; i < n; ++i) {
    double a_d = pow(cs[i][0] - sx, 2);
    double b_d = pow(cs[i][1] - sy, 2);
    double d = pow(a_d, b_d, 0.5);
    if (d == cs[i][2]) {
      s_list.push_back(i);
    }
  }

  // 頂点 t がとりうる円のリスト
  vector<int> t_list;
  for (int i = 0; i < n; ++i) {
    double a_d = pow(cs[i][0] - tx, 2);
    double b_d = pow(cs[i][1] - ty, 2);
    double d = pow(a_d, b_d, 0.5);
    if (d == cs[i][2]) {
      t_list.push_back(i);
    }
  }

  for (auto e: s_list) {
    seen.assign(N, false);
    dfs(G, s);
    if (seen[t]) {
      cout << "Yes" << endl;
    }
  }

  return 0;
}
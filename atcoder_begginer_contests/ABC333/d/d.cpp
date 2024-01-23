#include <bits/stdc++.h>
using namespace std;

vector<int> path;
vector<int> todo;
int ans = 2147483647; 

void DFS(vector<vector<int>> G, int i) {
  vector<int> nexts;

  for (auto e: G[i]) {
    path.push_back(e);
    todo[e] = 1;

    if (todo[e] == 0 && G[e].size() > 0) nexts.push_back(e);
  }

  if (nexts.size() == 0) {

    cout << "debug ====" << endl;
    for (auto e: path) {
      cout << e << ", ";
    }
    cout << endl;

    int len = path.size();

    ans = min(ans, len);
    path = {};
    todo = {};

    return;
  }

  for (auto e: nexts) {
    DFS(G, e);
  }
}

int main() {
  int n;
  cin >> n;

  todo.resize(n + 1, 0);

  vector<vector<int>> G(n + 1);

  for (int i = 0; i < n - 1; ++i) {
    int u, v;
    cin >> u >> v;

    G[u].push_back(v);
    G[v].push_back(u);
  }

  path.push_back(1);
  todo[1] = 1;

  for (auto e: G[1]) {
    DFS(G, e);
  }

  cout << ans << endl;

  return 0;
}
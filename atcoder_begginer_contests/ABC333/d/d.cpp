#include <bits/stdc++.h>
using namespace std;

vector<int> path;
vector<int> todo;

void DFS(vector<vector<int>> G, int i) {
  if (todo[i] == 0) path.push_back(i);
  todo[i] = 1;

  vector<int> nexts;

  for (auto e: G[i]) {
    if (todo[e] == 0) {
      nexts.push_back(e);
    }
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

  vector<int> lens;

  for (auto e: G[1]) {
    todo[1] = 1;

    DFS(G, e);

    int len = path.size();
    lens.push_back(len);

    path = {};
  }

  // 最大の部分木を残して、他の部分木を全て消す場合が最小
  int max_tree = 0;
  for (auto e: lens) {
    max_tree = max(max_tree, e);
  }

  cout << n - max_tree << endl;

  return 0;
}
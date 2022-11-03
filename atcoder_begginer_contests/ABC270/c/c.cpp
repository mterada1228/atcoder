#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y;

  cin >> n >> x >> y;

  vector<vector<int>> g(n+1);

  for (int i = 0; i < n - 1; ++i) {
    int u, v;

    cin >> u >> v;

    g[u].push_back(v);
    g[v].push_back(u);
  }

  // BFS with 経路復元
  vector<int> prev(n+1, -10000);

  queue<int> que;

  que.push(x);
  prev[x] = -1;

  while (!que.empty()) {
    int cur = que.front();
    que.pop();

    for (int next: g[cur]) {
      if (prev[next] >= -1) continue; // 訪問済

      prev[next] = cur;
      que.push(next);
    }
  }

  vector<int> ans;

  int cur = y;
  while (prev[cur] != -1) {
    ans.push_back(cur);
    cur = prev[cur];
  }
  ans.push_back(cur);

  reverse(ans.begin(), ans.end());
  for (auto e: ans) {
    cout << e << " ";
  }
  cout << endl;

  return 0;
}
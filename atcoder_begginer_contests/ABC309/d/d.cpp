#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000000;

int main() {
  int n1, n2, m;
  cin >> n1 >> n2 >> m;

  vector<vector<int>> G(n1 + n2 + 1);

  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;

    G[a].push_back(b);
    G[b].push_back(a);
  }

  // 1 -> 各ノード
  vector<int> dist_1(n1 + 1, INF);
  queue<int> que;
  int max_1 = 0;

  que.push(1);
  dist_1[1] = 0;

  while (!que.empty()) {
    int v = que.front();
    que.pop();

    for (auto e: G[v]) {
      if (dist_1[e] != INF) continue;

      que.push(e);
      dist_1[e] = min(dist_1[e], dist_1[v] + 1);

      max_1 = max(max_1, dist_1[e]);
    }
  }

  // n2 -> 各ノード
  vector<int> dist_2(n1 + n2 + 1, INF);
  int max_2 = 0;

  que.push(n1 + n2);
  dist_2[n1 + n2] = 0;

  while (!que.empty()) {
    int v = que.front();
    que.pop();

    for (auto e: G[v]) {
      if (dist_2[e] != INF) continue;

      que.push(e);
      dist_2[e] = min(dist_2[e], dist_2[v] + 1);

      max_2 = max(max_2, dist_2[e]);
    }
  }

  cout << max_1 + max_2 + 1 << endl;

  return 0;
}
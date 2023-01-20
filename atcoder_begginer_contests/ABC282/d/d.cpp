#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

// -1: 未訪問, 0: 白, 1: 黒
vector<int> color;

// 二部グラフ判定
bool dfs(const Graph &G, int v, int cur = 0) {
  color[v] = cur;
  for (auto next_v: G[v]) {
    // 隣接点が既に色確定していた場合
    if (color[next_v] != -1) {
      if (color[next_v] == cur) return false; // 同じ色が隣接したら二部グラフではない
      continue;
    }

    // 隣接頂点を反転した色に確定させて、再帰的に探索（1回でも false が返ってきたら二部グラフではない）
    if (!dfs(G, next_v, 1 - cur)) return false;
  }

  return true;
}

int main() {
  int n, m;
  cin >> n >> m;

  Graph G(n + 1);
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  // 探索
  color.assign(n + 1, -1);
  bool is_bipartite = true; // 二部グラフかどうかのフラグ
  for (int v = 0; v <= n; ++v) {
    if (color[v] != -1) continue; // 訪問済みはスキップ
    if (!dfs(G, v)) is_bipartite = false; 
  }

  int white = 0;
  int black = 0;

  if (is_bipartite) {
    for (int i = 1; i <= n; ++i) {
      if (color[i] == 0) ++white;
      if (color[i] == 1) ++black;
    }
    cout << white * black - m << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
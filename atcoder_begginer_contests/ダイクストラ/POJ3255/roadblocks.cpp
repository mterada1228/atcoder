#include <iostream>
#include <vector>
using namespace std;

int N, R;

const long long INF = 1LL << 60;

struct Edge {
  int to; // 隣接する頂点の番号
  int w; // その経路の距離
  Edge(int to, long long w) : to(to), w(w) {}
};

using Graph = vector<vector<Edge>>;

// 緩和を実行する関数
template<class T> bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  else return false;
}

int main() {
  cin >> N >> R;
  int st = 1;

  // グラフ
  Graph G(N + 1);
  for (int i = 0; i < R; ++i) {
    int a, b;
    long long w;
    cin >> a >> b >> w;

    G[a].push_back(Edge(b, w));
    G[b].push_back(Edge(a, w));
  }

  // ダイクストラで最短経路を求める
  vector<bool> used(N + 1, false);
  vector<long long> dist(N + 1, INF);
  vector<int> changers(N + 1, -1); // 経路復元用。緩和を行なった交差点を保存しておく
  dist[st] = 0;

  for (int i = 1; i <= N; ++i) {
    // 確定していない交差点のうち、dist が最小の交差点を探す
    long long min_dist = INF;
    int min_v = -1;
    for (int v = 1; v <= N; ++v) {
      if ( !used[v] && dist[v] < min_dist) {
        min_dist = dist[v];
        min_v = v;
      }
    }

    // そのような頂点がない場合は終了
    if (min_v == -1) break;

    // min_v を頂点とした各辺を緩和する
    for (auto e: G[min_v]) {
      if (chmin(dist[e.to], dist[min_v] + e.w)) changers[e.to] = min_v;
    }
    used[min_v] = true; // 使用した交差点は済とする
  }

  // 最短経路の距離を保存
  int min_dist = dist[N];

  // 最短経路を復元する
  vector<int> paths;

  paths.push_back(N);
  int v = N;

  while (!(v == 1)) {
    v = changers[v];
    paths.push_back(v);
  }

  reverse(paths.begin(), paths.end());

  // 第2最短経路をダイクストラで求める
  // 参考: https://qiita.com/nariaki3551/items/821dc6ffdc552d3d5f22
  vector<long long> candidates;

  for (int i = 0; i < paths.size() - 1; ++i) {
    vector<bool> used(N + 1, false);
    vector<long long> dist(N + 1, INF);
    dist[st] = 0;

    // spur_node -> spur_node_to の移動は認めない
    int spur_node = paths[i];
    int spur_node_to = paths[i + 1];

    for (int i = 1; i <= N; ++i) {
      // 確定していない交差点のうち、dist が最小の交差点を探す
      long long min_dist = INF;
      int min_v = -1;
      for (int v = 1; v <= N; ++v) {
        if ( !used[v] && dist[v] < min_dist) {
          min_dist = dist[v];
          min_v = v;
        }
      }

      // そのような頂点がない場合は終了
      if (min_v == -1) break;

      // min_v を頂点とした各辺を緩和する
      for (auto e: G[min_v]) {
        // spur_node からの spur_node_to への移動は行わない
        if (min_v == spur_node && e.to == spur_node_to) continue;

        chmin(dist[e.to], dist[min_v] + e.w);
      }
      used[min_v] = true; // 使用した交差点は済とする
    }

    // 第2最短経路の候補を格納する
    if (dist[N] != INF && dist[N] != min_dist) candidates.push_back(dist[N]);
  }

  // 第2最短経路の候補のうち、最も短い距離が第2最短経路
  sort(candidates.begin(), candidates.end());
  cout << candidates[0] << endl;
}

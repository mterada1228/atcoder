#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 辺 e = (s, t) を { w(e), {s, t} } の pair で表す
using Edge = pair<int, pair<int, int>>;

// Union-Find
struct UnionFind {
  vector<int> par, siz;

  // 初期化
  // 例) n = 4 の場合、par = {-1, -1, -1, -1}, siz = {1, 1, 1, 1}
  //     index + 1 が各ノードの値を意味し, {1}, {2}, {3}, {4} の木が4つある状態が形成される。
  UnionFind(int n) : par(n, -1), siz(n, 1) { }

  // ノード x の根を返す関数 
  int root(int x) {
    if (par[x] == -1) return x;
    else return par[x] = root(par[x]); // 経路圧縮を使用
  }

  // x, y が同じグループ（= 根が一致する）かどうかを判定する
  bool issame(int x, int y) {
    return root(x) == root(y);
  }

  // x を含むグループと、y を含むグループを併合する
  bool unite(int x, int y) {
    // x, y の根を求める
    x = root(x); y = root(y);

    // すでに同じグループであれば何もしない
    if (x == y) return false;

    // union by size を用いて、小さいサイズの木が子となる側にする。
    // 小さいサイズの木が y になるようにすることで対応する。
    if (siz[x] < siz[y]) swap(x, y);

    // y を x の子とする
    par[y] = x;
    siz[x] += siz[y];
    return true;
  }

  // x を含むグループのサイズを求める
  int size(int x) {
    return siz[root(x)];
  }
};

int main() {
  int V, E; // 頂点数と辺数
  cin >> V >> E;
  vector<Edge> edges(E); // 辺の集合
  for (int i = 0; i < E; ++i) {
    int s, t, w;
    cin >> s >> t >> w;
    edges[i] = Edge(w, make_pair(s, t));
  }

  // 各辺を重みが小さい順にソートする
  sort(edges.begin(), edges.end());

  // クラスカル法を行う
  long long res = 0;
  UnionFind uf(V);
  for (int i = 0 ; i < E; ++i) {
    int w = edges[i].first;
    int s = edges[i].second.first;
    int t = edges[i].second.second;

    // 辺(s, t) を追加すると、サイクルが形成される場合は、その辺を追加しない
    if (uf.issame(s, t)) continue;

    // そうでないならば、辺(s, t) を追加する
    res += w;
    uf.unite(s, t);
  }

  cout << res << endl;
}
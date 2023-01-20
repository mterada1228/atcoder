#include <bits/stdc++.h>
using namespace std;

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
  int n, m;
  cin >> n >> m;

  UnionFind uf(n + 1);

  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;

    uf.unite(u, v);
  }

  set<int> ans;
  for (int i = 1; i <= n; ++i) {
    ans.insert(uf.root(i));
  }

  cout << ans.size() << endl;

  return 0;
}
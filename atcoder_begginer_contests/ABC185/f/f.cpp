#include <bits/stdc++.h>
using namespace std;

template <typename T>

struct SegtreeForXOR {
  const T INF = numeric_limits<T>::max();
  int n;         // 葉の数(最下段の要素の数)
  vector<T> dat; // 完全二分木の配列
  
  // コンストラクタ
  // 2 の乗数に補正された葉の数と、その葉の数に対する2分木を返す。
  SegtreeForXOR(int n_) : n(), dat(n_ * 4, INF) {
    int x = 1;
    while (n_ > x) {
      x *= 2;
    }
    n = x;
  }

  void update(int i, T x) {
    i += n - 1;
    dat[i] = x;
    while (i > 0) {
      i = (i - 1) / 2;  // parent
      dat[i] = dat[i * 2 + 1] ^ dat[i * 2 + 2]; // XOR(child, child)
    }
  }

  T query(int from, int to) { return query_sub(from, to, 0, 0, n); }
  T query_sub(int from, int to, int i, int left, int right) {
    if (right <= from || to <= left) {
      return INF; // セグメントツリーの範囲外
    } else if (from <= left && right <= to) {
      return dat[i]; // 指定の範囲がすっぽり入る場合はその親ノードを返せば良い。
    } else {
      // 範囲がすっぽり入らない場合は、子ノード同士の XOR を返す。
      T vl = query_sub(from, to, i * 2 + 1, left, (left + right) / 2);
      T vr = query_sub(from, to, i * 2 + 2, (left + right) / 2, right);
      return vl ^ vr;
    }
  }
};

int main() {
  int n;
  cin >> n;

  SegtreeForXOR<int> segTree(n);

  for (int i = 0; i < n; ++i) {
    segTree.update(i, i);
  }

  cout << "SegTree-----" << endl;

  for (auto e: segTree.dat) {
    cout << e << endl;
  }

  cout << "ans------" << endl;
  // 区間 [0, 1) の XOR
  cout << segTree.query(0, 1) << endl;
  // 区間 [0, 2) の XOR
  cout << segTree.query(0, 2) << endl;

  return 0;
}
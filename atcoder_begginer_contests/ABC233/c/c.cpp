#include <bits/stdc++.h>
using namespace std;

long long n;
long long x;
long long ans;

vector<vector<long long>> L;

void DFS(long long tmp, long long i) {
  if (i == n - 1) {
    if (tmp == x)
    ++ans;
    return;
  }

  // 再帰ループ
  i += 1;
  for (auto e: L[i]) {
    if (tmp > x / e) continue; // オーバーフローするかもしれないので、無駄に大きくなった場合は計算をやめる。
    DFS(tmp * e, i);
  }
}

int main() {
  cin >> n >> x;

  for (int i = 0; i < n; ++i) {
    int l;
    cin >> l;

    vector<long long> A;

    for (int j = 0; j < l; ++j) {
      long long a;
      cin >> a;

      A.push_back(a);
    }

    L.push_back(A);
  }

  for (auto e: L[0]) {
    DFS(e, 0);
  }

  cout << ans << endl;

  return 0;
}
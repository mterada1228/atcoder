#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<double>> T;

  for (int i = 0; i < n; ++i) {
    double t, l, r;
    cin >> t >> l >> r;

    if (t == 2) r -= 0.5;
    if (t == 3) l += 0.5;
    if (t == 4) {
      r -= 0.5;
      l += 0.5;
    }

    T.push_back({ l, r });
  }

  long long ans = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      // 閉区間が共通しているかの判定。
      // [a, b], [c, d] が共通しているとき max(a, c) <= min(b, d)
      if ( max(T[i][0], T[j][0]) <= min(T[i][1], T[j][1]) ) ++ans;
    }
  }

  cout << ans << endl;

  return 0;
}
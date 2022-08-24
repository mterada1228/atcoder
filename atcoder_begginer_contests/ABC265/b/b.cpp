#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m, t;
  cin >> n >> m >> t;

  vector<long long> A(n-1);
  for (int i = 0; i < n - 1; ++i) {
    long long a;
    cin >> a;

    A[i] = a;
  }

  vector<long long> B(n);
  for (int i = 0; i < m; ++i) {
    int x;
    long long y;

    cin >> x >> y;

    B[x] = y;
  }

  for (int i = 0; i <= n-1; ++i) {
    // チェック
    if (t <= A[i]) {
      cout << "No" << endl;
      return 0;
    }

    // 移動
    t -= A[i];
    // ボーナス加算
    t += B[i + 2];
  }

  cout << "Yes" << endl;
  return 0;
}
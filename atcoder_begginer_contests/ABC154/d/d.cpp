#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;

  cin >> N >> K;

  vector<double> S(N + 1, 0.0);

  for (int i = 1; i <= N; ++i) {
    double p;
    cin >> p;

    double e = 1.0 / p * 1.0 / 2.0 * p * (p + 1.0);
    S[i] = S[i - 1] + e;
  }

  double max = 0.0;

  // 期待値の最大を求める
  for (int i = 1; i <= N - K + 1; ++i) {
    double e = S[i + K - 1] - S[i - 1];
    if (max < e) max = e;
  }

  cout << setprecision(10) << max << endl;

  return 0;
}
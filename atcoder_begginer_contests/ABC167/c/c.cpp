#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

int main() {
  long long N, M, X;
  cin >> N >> M >> X;

  vector<long long> C(M);
  vector<vector<long long>> A(N, vector<long long>(M));

  for (int i = 0; i < N; ++i) {
    cin >> C[i];
    for (int j = 0; j < M; ++j) {
      cin >> A[i][j];
    }
  }

  // bit 全探索
  long long min_price = INF;

  for (int bit = 0; bit < (1<<N); ++bit) {
    // ある選び方に対して行うべき処理
    vector<long long> res(M, 0);
    long long tot = 0;
    // 金額と理解度を算出
    for (int i = 0; i < N; ++i) {
      if (bit & (1<<i)) {
        tot += C[i];
        for (int j = 0; j < M; ++j) {
          res[j] += A[i][j];
        }
      }
    }
    // 全ての理解度が X 以上ならば最小の金額を更新する。
    if (*min_element(res.begin(), res.end()) >= X) {
      if (min_price > tot) min_price = tot;
    }
  }

  if (min_price == INF) {
    cout << -1 << endl;
    return 0;
  }

  cout << min_price << endl;

  return 0;
}
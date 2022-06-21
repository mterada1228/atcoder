#include <bits/stdc++.h>
using namespace std;

const int INF = 1LL << 60;

int main() {
  int N;
  cin >> N;

  vector<int> X(N);
  vector<int> C(N);

  for (int i = 0; i < N; ++i) cin >> X[i];
  for (int i = 0; i < N; ++i) cin >> C[i];

  vector<int> dp(N + 1);
  dp[0] = 0;

  for (int i = 0; i <= N; ++i) {
    for (int j = 0; j < X.size(); ++j) {
      dp[i]  
    }
  }

  return 0;
}
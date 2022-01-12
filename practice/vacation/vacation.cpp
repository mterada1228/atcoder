#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmax(T& a, T b) {
  if (a < b) {
    a = b;
  }
}

int main() {
  int N;
  cin >> N;

  // 幸福度の行列 
  vector<vector<long long>> H(N - 1, vector<long long>(3, 0));
  for (int i = 0; i < N; ++i) cin >> H[i][0] >> H[i][1] >> H[i][2];

  // DP
  vector<long long> dp(N, 0);

  // DP ループ
  int selected_index = 3; // i の時に選択された index
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < 3; j++) {
      if (selected_index != j) {
        chmax(dp[i+1], dp[i] + H[i][j]);
      }
    }
  }

  // Ans
  cout << dp[N - 1] << endl;
}
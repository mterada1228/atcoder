#include <iostream>
#include <vector>
using namespace std;

// 緩和を行う関数
template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

const long long INF = 1LL << 60;

int H, W;
vector<vector<long long>> c(10, vector<long long>(10, 0));

int main() {
  cin >> H >> W;

  // ワーシャルフロイドで i -> j の変更に必要な最小な魔力を求める
  // dp 配列
  vector<vector<long long>> dp(10, vector<long long>(10, INF));
  // dp 配列の初期化
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      long long c;
      cin >> c;
      dp[i][j] = c;
    }
  }

  // 緩和を行なって i -> j に必要な最小の魔力を求める
  for (int k = 0; k < 10; ++k) {
    for (int i = 0; i < 10; ++i) {
      for (int j = 0; j < 10; ++j) {
        chmin(dp[i][j], dp[i][k] + dp[k][j]);
      }
    }
  }

  // 壁に描かれた数字を全て 1 に変えるのに必要な魔力を求める
  long long sum = 0;
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      int a;
      cin >> a;
      if (a == -1 || a == 1) continue;
      sum += dp[a][1]; 
    }
  }

  cout << sum << endl;
}
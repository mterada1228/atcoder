#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> A;

const double INF = 1e+9;

template<class T> bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

bool check_ave(double x) {
  vector<double> B(N);
  for (int i = 0; i < N; ++i) {
    B[i] = A[i] - x;
  }

  // B の総和を最大化する選び方を DP で求める
  vector<double> dp(N + 1, -INF);
  // DP 初期化
  dp[0] = 0;
  dp[1] = B[0];
  // DP
  for (int i = 2; i <= N; ++i) {
    // i 番目、もしくは i + 1 番目のどちらか一方を選ばなくてはならないので、
    // 2個前、1個前からの遷移どちらか一方を選択するようにする。
    dp[i] = max(dp[i - 2], dp[i - 1]) + B[i - 1];
  }

  return max(dp[N - 1], dp[N]) >= 0;
}

bool check_med(int x) {
  // 中央値を最大にする選び方を DP で求める
  vector<int> dp(N, -INF);
  // DP 初期化
  dp[0] = (A[0] >= x ? 1 : -1);
  dp[1] = max(0, dp[0]) + (A[1] >= x ? 1 : -1);
  // DP
  for (int i = 2; i < N; ++i) {
    dp[i] = max(dp[i - 2], dp[i - 1]) + (A[i] >= x ? 1 : -1);
  }

  return max(dp[N - 2], dp[N - 1]) > 0;
}

int main() {
  cin >> N;

  A.resize(N);

  for (int i = 0; i < N; ++i) cin >> A[i];

  // 二分探索により平均値の最大を求める
  double ng = 0;
  double ok = 1e+9;
  while ( ok - ng >= 1e-3 ) {
    double mid = (ng + ok) / 2.0;
    if (check_ave(mid)) ng = mid;
    else ok = mid;
  } 

  cout << ok << endl;

  // 二分探索により中央値の最大値を求める
  int left = 0;
  int right = 1e+9;
  while ( right - left > 1) {
    int mid = (left + right) / 2;
    if( check_med(mid) ) left = mid;
    else right = mid; 
  }

  cout << left << endl;

  return 0;
}
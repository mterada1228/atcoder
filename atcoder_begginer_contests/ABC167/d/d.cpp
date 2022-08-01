#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;

  vector<long long> A;
  vector<long long> route;

  A.push_back(0);

  for (int i = 0; i < n; ++i) {
    long long a;
    cin >> a;
    A.push_back(a);
  }

  vector<long long> seen(n + 1, 0);
  // 0 回目の移動で訪れるのはスタート地点の1
  seen[1] = 1;

  long long now_town = 1;
  long long move_cnt = 0;
  long long cycle = 0;

  for (int i = 0; i <= 1000000; ++i) {
    move_cnt += 1;
    now_town = A[now_town];

    if (move_cnt == k) {
      cout << now_town << endl;
      return 0;
    }

    if (seen[now_town] == 0) {
      // 街を訪れた際の移動回数を記録する
      seen[now_town] = move_cnt;
    } else {
      // 既に訪れたことのある街の場合
      cycle = move_cnt - seen[now_town];
      break;
    }
  }

  // ループに達した時の残り移動回数
  k -= move_cnt;
  // 周期を何度か繰り返した後、あまりの分だけ移動して終了
  k %= cycle;
  for (int i = 0; i <= k; ++i) {
    now_town = A[now_town];
  }

  cout << now_town << endl;

  return 0;
}
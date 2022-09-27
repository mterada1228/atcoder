#include <bits/stdc++.h>
using namespace std;

void debug(vector<long long> reds, vector<long long> blues) {
  cout << "debug ====" << endl;
  cout << "reds ====" << endl;
  for (auto e: reds) {
    cout << e << " ";
  }
  cout << endl;
  cout << "blues ====" << endl;
  for (auto e: blues) {
    cout << e << " ";
  }
  cout << endl;
}

int main() {
  long long n, x, y;

  cin >> n >> x >> y;

  vector<long long> reds(n, 0);
  vector<long long> blues(n, 0);

  reds[n - 1] = 1;

  bool flg = true;

  while (flg) {
    for (int i = n - 2; i >= 0; --i) {
      // 赤の宝石を変換
      reds[i] = reds[i] + reds[i+1];
      blues[i+1] = blues[i+1] + reds[i+1] * x;
      reds[i+1] = 0;

      // 青の宝石を変換
      reds[i] = reds[i] + blues[i+1];
      blues[i] = blues[i] + blues[i+1] * y;
      blues[i+1] = 0;
    }

    // 終了条件
    flg = false;
    for (int i = 1; i < n; ++i) {
      if (reds[i] > 0) {
        flg = true;
        break;
      }
      if (blues[i] > 0) {
        flg = true;
        break;
      }
    }
  }

  cout << blues[0] << endl;

  return 0;
}
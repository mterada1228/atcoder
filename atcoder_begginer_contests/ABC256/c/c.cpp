#include <bits/stdc++.h>
using namespace std;

int main() {
  int h1, h2, h3, w1, w2, w3;
  cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;

  // h1 を満たすパターン
  vector<vector<int>> h1_arr;
  for (int i = 1; i <= h1 - 2; ++i) {
    for (int k = 1; k <= h1 - i - 1; ++k) {
      h1_arr.push_back({i, k, h1 - (i + k)});
    }
  }

  // h2 を満たすパターン
  vector<vector<int>> h2_arr;
  for (int i = 1; i <= h2 - 2; ++i) {
    for (int k = 1; k <= h2 - i - 1; ++k) {
      h2_arr.push_back({i, k, h2 - (i + k)});
    }
  }

  // h3 を満たすパターン
  vector<vector<int>> h3_arr;
  for (int i = 1; i <= h3 - 2; ++i) {
    for (int k = 1; k <= h3 - i - 1; ++k) {
      h3_arr.push_back({i, k, h3 - (i + k)});
    }
  }

  int cnt = 0;

  for (int i = 0; i < h1_arr.size(); ++i) {
    for (int j = 0; j < h2_arr.size(); ++j) {
      for (int k = 0; k < h3_arr.size(); ++k) {
        if (h1_arr[i][0] + h2_arr[j][0] + h3_arr[k][0] == w1) {
          if (h1_arr[i][1] + h2_arr[j][1] + h3_arr[k][1] == w2) {
            if (h1_arr[i][2] + h2_arr[j][2] + h3_arr[k][2] == w3) {
              ++cnt;
            }
          }
        }
      }
    }
  }

  cout << cnt << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dd = { {-1, 0}, {0, 1}, {1, 0}, {0, -1}, {-1, 1}, {1, 1}, {-1, -1}, {1, -1} };

int main() {
  int n;
  cin >> n;

  vector<vector<char>> arr(n, vector<char>(n)); 

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;

    for (int j = 0; j < n; ++j) {
      arr[i][j] = s[j]; 
    }
  }

  long long ans = 0;

  // スタート地点を全てシミュレーション
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      // 8方向全て
      for (auto e: dd) {
        string tmp = "";

        tmp.push_back(arr[i][j]);

        int now_i = i;
        int now_j = j;
        for (int k = 0; k < n - 1; ++k) {
          now_i = now_i + e[0];
          now_j = now_j + e[1];

          if (now_i < 0) {
            now_i = n + now_i;
          } else if (now_i >= n) {
            now_i = now_i % n;
          }

          if (now_j < 0) {
            now_j = n + now_j;
          } else if (now_j >= n) {
            now_j = now_j % n;
          }

          tmp.push_back(arr[now_i][now_j]); 
        }
        ans = max(ans, stoll(tmp));
      }
    }
  }

  cout << ans << endl;

  return 0;
}
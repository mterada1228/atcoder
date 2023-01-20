#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  vector<string> S;

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;

    S.push_back(s);
  }

  int cnt = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      vector<int> arr(m, 0);

      bool flg = true;
      for (int k = 0; k < m; ++k) {
        if (S[i][k] == 'x' && S[j][k] == 'x') {
          flg = false;
        }
      }

      if (flg) ++cnt;
    }
  }

  cout << cnt << endl;

  return 0;
}
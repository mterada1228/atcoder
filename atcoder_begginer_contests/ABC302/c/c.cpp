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

  sort(S.begin(), S.end());

  do {
    bool flg = true;

    for (int i = 0; i < S.size() - 1; ++i) {
      int cnt = 0;

      for (int k = 0; k < m; ++k) {
        if (S[i][k] != S[i + 1][k]) ++cnt;
      }

      if (cnt != 1) {
        flg = false;
        break;
      }
    }

    if (flg) {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(S.begin(), S.end()));

  cout << "No" << endl;

  return 0;
}
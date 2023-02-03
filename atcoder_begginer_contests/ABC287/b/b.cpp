#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<string> S;
  vector<string> T;

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    S.push_back(s);
  }

  for (int i = 0; i < m; ++i) {
    string t;
    cin >> t;
    T.push_back(t);
  }

  int cnt = 0;

  for (int i = 0; i < n; ++i) {
    string tmp = "";
    for (int k = 3; k <= 5; ++k) {
      tmp.push_back(S[i][k]);
    }
    for (int j = 0; j < m; ++j) {
      if (tmp == T[j]) {
        ++cnt;
        break;
      }
    }
  }

  cout << cnt << endl;

  return 0;
}
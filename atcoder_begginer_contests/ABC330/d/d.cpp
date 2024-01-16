#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  vector<string> S;
  vector<long long> Num_i(n, 0);
  vector<long long> Num_j(n, 0);

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    S.push_back(s);

    for (int j = 0; j < n; ++j) {
      if (s[j] == 'o') {
        ++Num_i[i];
        ++Num_j[j];
      }
    }
  }

  long long ans = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (S[i][j] == 'o') {
        ans = ans + (Num_i[i] - 1) * (Num_j[j] - 1);
      }
    }
  }

  cout << ans << endl;

  return 0;
}
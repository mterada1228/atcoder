#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int ans = 1;

  for (int i = 0; i < s.size(); ++i) {
    for (int j = i + 1; j < s.size(); ++j) {
      string tmp_b, tmp_e;

      if ((j - i + 1) % 2 == 0) {
        for (int k = i; k <= (j + i) / 2; ++k) {
          tmp_b.push_back(s[k]);
        }

        for (int k = j; k > (j + i) / 2; --k) {
          tmp_e.push_back(s[k]);
        }
      } else {
        for (int k = i; k <= (j + i) / 2; ++k) {
          tmp_b.push_back(s[k]);
        }

        for (int k = j; k >= (j + i) / 2; --k) {
          tmp_e.push_back(s[k]);
        }
      }

      if (tmp_b == tmp_e) ans = max(ans, j - i + 1);
    }
  }

  cout << ans << endl;

  return 0;
}
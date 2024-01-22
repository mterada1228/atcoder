#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  string s;
  cin >> s;

  for (int i = 0; i <= n; ++i) {
    int m_c = m;
    int l_c = i;

    for (int j = 1; j <= n; ++j) {
      if (s[j - 1] == '0') {
        m_c = m;
        l_c = i;
      } else if (s[j - 1] == '1') {
        if (m_c >= 1) {
          m_c--;
        } else {
          l_c--;
        }
      } else {
        l_c--;
      }

      if (l_c < 0) {
        break;
      }

      if (j == n) {
        cout << i << endl;
        return 0;
      }
    }
  }

  return 0;
}
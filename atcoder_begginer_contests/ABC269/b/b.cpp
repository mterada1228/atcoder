#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;

  a = 11;
  b = 0;
  c = 11;
  d = 0;

  vector<string> S(11, "...........");

  for (int i = 1; i <= 10; ++i) {
    string s;
    cin >> s;

    S[i] = '.' + s;
  }

  for (int i = 1; i <= 10; ++i) {
    for (int j = 1; j <= 10; ++j) {
      if (S[i][j] == '#') {
        a = min(a, i);
        b = max(b, i);
        c = min(c, j);
        d = max(d, j);
      }
    }
  }

  cout << a << " " << b << endl;
  cout << c << " " << d << endl;

  return 0;
}
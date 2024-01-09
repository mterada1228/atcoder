#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  string s, t;
  cin >> s >> t;
  
  bool pre = true;
  bool suf = true;

  for (int i = 0; i < n; ++i) {
    if (t[i] != s[i]) pre = false;
    if (t[m - n + i] != s[i]) suf = false;
  }

  if (pre && suf) cout << 0 << endl;
  if (pre && !suf) cout << 1 << endl;
  if (!pre && suf) cout << 2 << endl;
  if (!pre && !suf) cout << 3 << endl;

  return 0;
}
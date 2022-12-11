#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int ans = 0;
  for (auto e: s) {
    if (e == 'v') ans = ans + 1;
    if (e == 'w') ans = ans + 2;
  }

  cout << ans << endl;

  return 0;
}
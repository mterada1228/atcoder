#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int cnt = 0;
  char cur = s[0];

  for (auto e: s) {
    if (cur != e) {
      ++cnt;
      cur = e;
    }
  }

  cout << cnt << endl;

  return 0;
}
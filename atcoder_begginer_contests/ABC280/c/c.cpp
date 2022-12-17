#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  for (int i = 0; i < s.size(); ++i) {
    if (s[i] != t[i]) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << t.size() << endl;

  return 0;
}
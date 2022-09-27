#include <bits/stdc++.h>
using namespace std;

int main() {
  map<char, int> mp;

  string s;
  cin >> s;

  ++mp[s[0]];
  ++mp[s[1]];
  ++mp[s[2]];

  for (int i = 0; i < 3; ++i) {
    if (mp[s[i]] == 1) {
      cout << s[i] << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}
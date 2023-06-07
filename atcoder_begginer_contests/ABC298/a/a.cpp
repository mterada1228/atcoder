#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;

  cin >> n >> s;

  map<char, int> mp;

  for (int i = 0; i < n; ++i) {
    ++mp[s[i]];
  }

  if (mp['o'] >= 1 && mp['x'] == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
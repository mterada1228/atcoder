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

  if (mp['T'] > mp['A']) {
    cout << 'T' << endl;
  } else if (mp['A'] > mp['T']) {
    cout << 'A' << endl;
  } else {
    if (s[s.size() - 1] == 'T') {
      cout << 'A' << endl;
    } else {
      cout << 'T' << endl;
    }
  }

  return 0;
}
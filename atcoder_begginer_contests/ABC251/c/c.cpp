#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  pair<int, int> win = { 0, 0 };
  map<string, int> mp;

  for (int i = 0; i < n; ++i) {
    string s;
    int t;

    cin >> s >> t;

    if (mp[s]) {
      continue;
    } else {
      mp[s] = 1;

      if (win.second < t) {
        win.first = i + 1;
        win.second = t;
      }
    }
  }

  cout << win.first << endl;

  return 0;
}
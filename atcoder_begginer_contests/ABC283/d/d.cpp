#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int c = 0;

  vector<vector<char>> X(300000);
  map<char, int> used;

  for (auto e: s) {
    if (e == '(') {
      ++c;
    } else if (e == ')') {
      for (auto f: X[c]) {
        used[f] = 0;
      }
      X[c] = {};
      --c;
    } else {
      if (used[e] != 0) {
        cout << "No" << endl;
        return 0;
      } else {
        X[c].push_back(e);
        ++used[e];
      }
    }
  }

  cout << "Yes" << endl;

  return 0;
}
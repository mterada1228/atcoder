#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  if (s == t) {
    cout << "Yes" << endl;
    return 0;
  }

  if (s.size() < t.size()) {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 0; i <= s.size() - t.size(); ++i) {
    string tmp;
    for (int j = 0; j < t.size(); ++j) {
      tmp.push_back(s[i + j]);
    }

    if (tmp == t) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> s;
  for (int i = 0; i < 3; ++i) {
    string tmp;
    cin >> tmp;
    s.push_back(tmp);
  }

  string t;
  cin >> t;
  for (int i = 0; i < t.length(); ++i) {
    cout << s[t[i] - '0' - 1];
  }

  cout << endl;

  return 0;
}
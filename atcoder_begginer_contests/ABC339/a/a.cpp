#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string ans;

  for (auto e: s) {
    if (e == '.') {
      ans = "";
    } else {
      ans.push_back(e);
    }
  }

  cout << ans << endl;

  return 0;
}
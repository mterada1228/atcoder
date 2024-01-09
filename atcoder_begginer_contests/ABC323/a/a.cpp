#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool flg = true;

  for (int i = 0; i < s.size(); ++i) {
    if (i % 2 != 0) {
      if (s[i] == '1') {
        flg = false;
      }
    }
  }

  if (flg) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
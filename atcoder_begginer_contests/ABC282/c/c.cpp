#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  bool flg = false;

  for (auto e: s) {
    if (e == '"') {
      cout << e;

      if (flg) {
        flg = false;
      } else {
        flg = true;
      }
    } else if (e == ',') {
      if (flg) {
        cout << e;
      } else {
        cout << '.';
      }
    } else {
      cout << e;
    }
  }

  cout << endl;

  return 0;
}
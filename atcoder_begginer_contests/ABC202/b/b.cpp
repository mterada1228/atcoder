#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  reverse(s.begin(), s.end());

  for (auto e: s) {
    if (e == '6') {
      cout << '9';
    } else if (e == '9') {
      cout << '6';
    } else {
      cout << e;
    }
  }

  cout << endl;

  return 0;
}
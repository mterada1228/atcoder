#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for (auto e: s) {
    if (e == ',') {
      cout << ' ';
    } else {
      cout << e;
    }
  }
  cout << endl;

  return 0;
}
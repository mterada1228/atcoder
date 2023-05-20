#include <bits/stdc++.h>
using namespace std;

int main() {
  string w;
  cin >> w;

  map<char, int> mp;

  for (auto e: w) {
    ++mp[e];
  }

  bool flg = true;

  for (auto e: mp) {
    if (e.second % 2 == 1) {
      flg = false;
    }
  }

  if (flg) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
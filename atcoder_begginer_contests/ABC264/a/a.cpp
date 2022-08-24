#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, r;
  cin >> l >> r;

  string str = "atcoder";

  for (int i = l-1; i <= r-1; ++i) {
    cout << str[i];
  }

  cout << endl;

  return 0;
}
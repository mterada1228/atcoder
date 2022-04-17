#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  map<char, int> mp;

  for (int i = 0; i < S.length(); ++i) {
    ++mp[S[i]];
  }

  for (int i = 0; i <= 9; ++i) {
    if (mp[i + '0'] == 0) cout << i << endl;
  }

  return 0;
}
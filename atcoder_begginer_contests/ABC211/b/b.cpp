#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> mp;

  for (int i = 0; i < 4; ++i) {
    string s;
    cin >> s;
    ++mp[s];
  }

  if (
    mp["H"] == 1 &&
    mp["2B"] == 1 && 
    mp["3B"] == 1 && 
    mp["HR"] == 1
  ) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<char> new_s;

  cout << '0';
  for (int i = 1; i < 4; ++i) {
    if (s[i-1] == '1') {
      cout << '1';
    } else {
      cout << '0';
    }
  }
  
  cout << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> S;

  for (int i = 0; i < 8; ++i) {
    string s;
    cin >> s;
    S.push_back(s);
  }

  for (int i = 0; i < 8; ++i) {
    for (int j = 0; j < 8; ++j) {
      if (S[i][j] == '*') {
        char tmp = 'a' + j;
        cout << tmp << 8 - i  << endl;
        return 0;
      }
    }
  }

  return 0;
}
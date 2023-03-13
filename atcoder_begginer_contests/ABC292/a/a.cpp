#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); ++i) {
    int ascii = s[i] - 32;
    char c = ascii;

    cout << c;
  }
  cout << endl;

  return 0;
}
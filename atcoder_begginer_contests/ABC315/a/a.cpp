#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); ++i) {
    if (
      s[i] == 'a' ||
      s[i] == 'i' ||
      s[i] == 'u' ||
      s[i] == 'e' ||
      s[i] == 'o'
    ) {
      continue;
    } else {
      cout << s[i];
    }
  }

  cout << endl;

  return 0;
}
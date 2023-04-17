#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size() - 1 + 1; i += 2) {
    char tmp = s[i];
    s[i] = s[i + 1];
    s[i + 1] = tmp;
  }

  cout << s << endl;

  return 0;
}
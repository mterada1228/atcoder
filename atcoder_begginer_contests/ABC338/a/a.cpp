#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  if (!(s[0] >= 'A' && s[0] <= 'Z')) {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 1; i < s.length(); ++i) {
    if (!(s[i] >= 'a' && s[i] <= 'z')) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
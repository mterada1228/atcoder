#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  if (regex_search(s, regex("[a-z]"))) {
    if (regex_search(s, regex("[A-Z]"))) {
      for (int i = 0; i < s.length(); ++i) {
        for (int j = i + 1; j < s.length(); ++j) {
          if (s[i] == s[j]) {
            cout << "No" << endl;
            return 0;
          }
        }
      }
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  if (s.size() != 8) {
    cout << "No" << endl;
    return 0;
  }

  if (s[0] >= 'A' && s[0] <= 'Z') {
    if (s[7] >= 'A' && s[7] <= 'Z') {
      string tmp = "";
      for (int i = 1; i <= 6; ++i) {
        tmp.push_back(s[i]);
      }
      if (stoi(tmp) >= 100000 && stoi(tmp) <= 999999) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;

  cin >> n >> s;

  int i = 0;

  while (i < n) {
    if (s[i] == 'n') {
      if (s[i+1] == 'a') {
        cout << "nya";
        i = i + 2;
      } else {
        cout << s[i];
        i = i + 1;
      }
    } else {
      cout << s[i];
      i = i + 1;
    }
  }

  cout << endl;

  return 0;
}
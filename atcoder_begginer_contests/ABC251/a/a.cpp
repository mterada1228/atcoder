#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  if (s.size() == 1) {
    for (int i = 0; i < 6; ++i) {
      cout << s;
    }
    cout << endl;
  } else if (s.size() == 2) {
    for (int i = 0; i < 3; ++i) {
      cout << s;
    }
    cout << endl;
  } else {
    for (int i = 0; i < 2; ++i) {
      cout << s;
    }
    cout << endl;
  }

  return 0;
}
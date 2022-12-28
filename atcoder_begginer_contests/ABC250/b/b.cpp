#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < a; ++j) {
      for (int k = 0; k < n; ++k) {
        for (int l = 0; l < b; ++l) {
          if (i % 2 == 0 && k % 2 == 0) {
            cout << '.';
          }
          if (i % 2 == 0 && k % 2 == 1) {
            cout << '#';
          }
          if (i % 2 == 1 && k % 2 == 0) {
            cout << "#";
          }
          if (i % 2 == 1 && k % 2 == 1) {
            cout << '.';
          }
        }
      }
      cout << endl;
    }
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a = 10;
  int b = 10;

  for (int i = 0; i < 9; ++i) {
    if (n < a) {
      if (i <= 2) {
        cout << n << endl;
      } else {
        cout << n / b * b << endl;
      }
      return 0;
    }

    a *= 10;

    if (i > 2) {
      b *= 10;
    }
  }

  return 0;
}
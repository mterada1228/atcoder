#include <bits/stdc++.h>
using namespace std;

int main() {
  int v, a, b, c;
  cin >> v >> a >> b >> c;

  while (v >= 0) {
    v -= a;

    if (v < 0) {
      cout << "F" << endl;
      return 0;
    }

    v -= b;

    if (v < 0) {
      cout << "M" << endl;
      return 0;
    }

    v -= c;

    if (v < 0) {
      cout << "T" << endl;
      return 0;
    }
  }

  return 0;
}
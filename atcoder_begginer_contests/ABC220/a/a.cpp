#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
  cin >> a >> b >> c;

  int i = 1;

  do {
    c *= i;
    if (a <= c && c <= b) {
      cout << c << endl;
      return 0;
    }
    ++i;
  } while ( c <= b );

  cout << -1 << endl;

  return 0;
}
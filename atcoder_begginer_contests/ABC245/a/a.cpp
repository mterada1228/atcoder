#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a < c) {
    cout << "Takahashi" << endl;
    return 0;
  } else if (a == c) {
    if (b <= d) {
      cout << "Takahashi" << endl;
      return 0;
    } else {
      cout << "Aoki" << endl;
      return 0;
    }
  } else {
    cout << "Aoki" << endl;
    return 0;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (b == a / 2) {
    cout << "Yes" << endl;
    return 0;
  } else if (b == 2 * a) {
    cout << "Yes" << endl;
    return 0;
  } else if (b == 2 * a + 1) {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;

  return 0;
}
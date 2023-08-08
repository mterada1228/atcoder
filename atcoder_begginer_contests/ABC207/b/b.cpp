#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  if (d * c - b <= 0) {
    cout << (-1) << endl;
    return 0;
  }

  cout << (a + (d * c - b) - 1) / (d * c - b) << endl;

  return 0;
}
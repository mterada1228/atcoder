#include <bits/stdc++.h>
using namespace std;

int main() {
  long long X, K, D;

  cin >> X >> K >> D;
  X = abs(X);

  if (X - K * D >= 0) {
    cout << abs(X - K * D) << endl;
    return 0;
  }

  long long ans1 = X % D;
  long long ans2 = X % D - D;
  long long cnt = X / D;

  if ((K - cnt) % 2 == 0) {
    cout << abs(ans1) << endl;
  } else {
    cout << abs(ans2) << endl;
  }

  return 0;
}

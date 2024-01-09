#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  while (n > 1) {
    if (n % 2 == 0) {
      n /= 2;
    } else if (n % 3 == 0) {
      n /= 3;
    } else {
      break;
    }
  }

  if (n == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
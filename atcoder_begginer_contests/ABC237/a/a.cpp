#include <bits/stdc++.h>
using namespace std;

const long long L = pow(2, 31) * -1;
const long long R = pow(2, 31);

int main() {
  long long n;
  cin >> n;

  if (L <= n && n < R) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}

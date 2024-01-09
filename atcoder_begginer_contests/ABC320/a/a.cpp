#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b;
  cin >> a >> b;

  long long a_tmp = 1;
  long long b_tmp = 1;

  for (int i = 0; i < b; ++i) {
    a_tmp = a_tmp * a;
  }

  for (int i = 0; i < a; ++i) {
    b_tmp = b_tmp * b;
  }

  cout << a_tmp + b_tmp << endl;

  return 0;
}
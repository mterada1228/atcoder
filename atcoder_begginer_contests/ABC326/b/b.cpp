#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = n; i <= 999; ++i) {
    int tmp_i = i;

    int c = tmp_i % 10;

    tmp_i /= 10;

    int b = tmp_i % 10;
    int a = tmp_i / 10;

    if (a * b == c) {
      cout << (100 * a + 10 * b + c) << endl;
      return 0;
    }
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long x, a, d, n;

  cin >> x >> a >> d >> n;

  // d = 0 の場合
  if (d == 0) {
    cout << abs(a - x) << endl;
    return 0; 
  }

  // x は index 番目と index + 1 番目の間に存在する
  // ただし、端の場合は両端のどちらかが一番近い
  long long index;
  index = (x - a) / d;

  // index 番目が等差数列の範囲を超える場合
  if (d < 0) {
    if (a + index * d > a || a + index * d < a + (n - 1) * d) {
      long long len_1 = abs(x - a);
      long long len_2 = abs(x - (a + (n - 1) * d));
      cout << min(len_1, len_2) << endl;
      return 0;
    }
  } else {
    if (a + index * d < a || a + (n - 1) * d < a + index * d) {
      long long len_1 = abs(x - a);
      long long len_2 = abs(x - (a + (n - 1) * d));
      cout << min(len_1, len_2) << endl;
      return 0;
    }
  }

  long long len_1 = abs(x - (a + index * d));
  long long len_2 = abs(x - (a + (index + 1) * d));
  cout << min(len_1, len_2) << endl;

  return 0;
}
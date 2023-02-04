#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  cin >> x;

  // 1 桁の場合
  if (x.size() == 1 || (x.size() == 2 && x[0] == '-')) {
    long long ll_x = stoll(x);

    if (ll_x >= 0) {
      cout << 0 << endl;
    } else {
      cout << -1 << endl;
    }

    return 0;
  }

  // 2 桁以上の場合
  char last = x[x.size() - 1];
  x.pop_back();

  long long ll_x = stoll(x);

  if (ll_x >= 0) {
    cout << x << endl;
  } else {
    if (last == '0') {
      cout << x << endl;
    } else {
      cout << '-' << ll_x * -1 + 1 << endl;
    }
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, p;
  cin >> n >> m >> p;

  int k = 0;
  int tmp = 0;
  int cnt = 0;

  while (tmp <= n) {
    tmp = m + k * p;
    if (tmp <= n) ++cnt;
    ++k;
  }

  cout << cnt << endl;

  return 0;
}
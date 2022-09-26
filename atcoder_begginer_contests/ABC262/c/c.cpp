#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
  int top = 1;
  int bottom = 1;

  for (int i = n - r + 1; i <= n; ++i) {
    top *= i;
  }

  for (int i = 1; i <= r; ++i) {
    bottom *= i;
  }

  return top / bottom;
}

int main() {
  int n;

  cin >> n;

  vector<int> a(n + 1);
  int same = 0;

  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
    if (a[i] == i) ++same;
  }

  long long cnt = 0;

  for (int i = 1; i <= n; ++i) {
    if (a[i] > i && a[a[i]] == i) ++cnt;
  }

  cnt = cnt + nCr(same, 2);

  cout << cnt << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  long long max_l = 0;
  long long sum_l = 0;
  vector<long long> L;

  for (int i = 0; i < n; ++i) {
    long long l;
    cin >> l;
    L.push_back(l + 1);

    max_l = max(max_l, l);
    sum_l = sum_l + l + 1; 
  }

  long long l = max_l;
  long long r = sum_l;

  while (r - l > 1) {
    long long w = (l + r) / 2;

    long long f_w = 1;
    long long tmp_w = 0;

    for (int i = 0; i < n; ++i) {
      if (w >= tmp_w + L[i]) {
        tmp_w = tmp_w + L[i];
      } else {
        tmp_w = L[i];
        ++f_w;
      }
    }

    if (f_w > m) {
      l = w;
    } else {
      r = w;
    }
  }

  cout << r - 1 << endl;

  return 0;
}
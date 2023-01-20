#include <bits/stdc++.h>
using namespace std;

// 素因数分解を試し割りによって求める

int main() {
  int n;

  cin >> n;

  vector<pair<int, int>> res;

  for (int i = 2; i * i <= n; ++i) {
    if (n % i != 0) {
      continue;
    }

    int x = 0;

    while (n % i == 0) {
      ++x;
      n /= i;
    }

    res.push_back({i, x});
  }

  if (n != 1) {
    res.push_back({n, 1});
  }

  for (int i = 0; i < res.size(); ++i) {
    if (i != res.size() - 1) {
      cout << res[i].first << "^" << res[i].second << " * ";
    } else {
      cout << res[i].first << "^" << res[i].second << endl;
    }
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> M;

  for (int i = 0; i < m; ++i) {
    int a;
    cin >> a;
    M.push_back(a);
  }

  for (int i = 1; i <= n; ++i) {
    auto iter_a = lower_bound(M.begin(), M.end(), i);
    cout << *iter_a - i << endl;
  }

  return 0;
}
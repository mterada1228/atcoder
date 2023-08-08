#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> x, pair<int, int> y) {
  return x.second < y.second;
}

int main() {
  long long n, k;
  cin >> n >> k;

  vector<pair<int, int>> A;
  for (int i = 1; i <= n; ++i) {
    int a;
    cin >> a;
    A.push_back({ i, a });
  }

  sort(A.begin(), A.end(), compare);

  vector<long long> ans(n + 1);

  for (int i = 1; i <= n; ++i) {
    ans[i] = k / n;
  }

  long long k_mod_n = k % n;

  int cur = 0;
  while (k_mod_n > 0) {
    ++ans[A[cur].first];
    ++cur;
    --k_mod_n;
  }

  for (int i = 1; i <= n; ++i) {
    cout << ans[i] << endl;
  }

  return 0;
}
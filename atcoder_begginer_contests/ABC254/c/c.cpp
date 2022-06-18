#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;

  cin >> n >> k;

  vector<vector<int>> a(k);

  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;

    a[i % k].push_back(tmp);
  }

  for (int i = 0; i < k; ++i) {
    sort(a[i].begin(), a[i].end());
  }

  vector<int> ans;

  for (int i = 0; i <= n / k; ++i) {
    for (int j = 0; j < k; ++j) {
      if (i * k > n) continue;

      ans.push_back(a[j][i]);
    }
  } 

  if (is_sorted(ans.begin(), ans.end())) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
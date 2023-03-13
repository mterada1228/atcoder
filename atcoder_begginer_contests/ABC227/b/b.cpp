#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  vector<int> S;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    int s;
    cin >> s;
    S.push_back(s);
  }

  // あり得る面積の候補
  vector<int> ans;
  for (int a = 1; a <= 1000; ++a) {
    for (int b = 1; b <= 1000; ++b) {
      int tmp = 4 * a * b + 3 * a + 3 * b;
      ans.push_back(tmp);
    }
  }

  int cnt = 0;
  for (auto e: S) {
    auto res = find(ans.begin(), ans.end(), e);
    if (res == ans.end()) {
      ++cnt;
    }
  }

  cout << cnt << endl;

  return 0;
}
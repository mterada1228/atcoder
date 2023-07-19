#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> S, T;
  for (int i = 0; i < n; ++i) {
    int s;
    cin >> s;
    S.push_back(s);
  }

  for (int i = 0; i < n; ++i) {
    int t;
    cin >> t;
    T.push_back(t);
  }

  vector<int> dp(n);
  dp[0] = T[0];

  for (int i = 1; i < 2 * n; ++i) {
    dp[i % n] = min(T[i % n], dp[(i - 1) % n] + S[(i - 1) % n]);
  }

  for (auto e: dp) {
    cout << e << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  int m;
  cin >> m;

  vector<int> B_tmp;

  for (int i = 0; i < m; ++i) {
    int b;
    cin >> b;
    B_tmp.push_back(b);
  }

  int x;
  cin >> x;

  vector<int> B(x + 1, 0);

  for (auto e: B_tmp) {
    B[e] = 1;
  }

  vector<int> dp(x + 1, 0);

  dp[0] = 1;

  for (int i = 1; i <= x; ++i) {
    for (auto e: A) {
      if (
        i - e >= 0 &&
        dp[i - e] == 1 &&
        B[i] == 0
      ) {
        dp[i] = 1;
      }
    }
  }

  if (dp[x] == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
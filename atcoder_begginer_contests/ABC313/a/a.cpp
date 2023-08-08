#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> P;
  int max = 0;

  for (int i = 0; i < n; ++i) {
    int p;
    cin >> p;
    P.push_back(p);
  }

  int ans = 0;
  int cur = P[0];

  for (int i = 1; i < n; ++i) {
    if (cur <= P[i]) {
      ans = ans + P[i] - cur + 1;
      cur = P[i] + 1;
    }
  }

  cout << ans << endl;

  return 0;
}
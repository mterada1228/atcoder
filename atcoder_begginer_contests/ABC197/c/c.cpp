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

  int min_v = 1073741825;

  if (n == 1) {
    cout << A[0] << endl;
    return 0;
  }

  for (int bit = 1; bit < (1<<(n-1)); ++bit) {
    vector<int> S;

    S.push_back(0);

    for (int i = 0; i < n; ++i) {
      if (bit & (1<<i)) {
        S.push_back(i + 1);
      }
    }

    S.push_back(n);

    int ans = 0;

    for (int i = 0; i < S.size() - 1; ++i) {
      vector<int> arr;

      int res = 0;
      
      for (int j = S[i]; j < S[i + 1]; ++j) {
        res |= A[j];
      }

      arr.push_back(res);

      for (auto e: arr) {
        ans ^= e;
      }
    }

    min_v = min(min_v, ans);
  }

  cout << min_v << endl;

  return 0;
}
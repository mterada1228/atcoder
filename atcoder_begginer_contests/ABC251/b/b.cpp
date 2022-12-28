#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, w;
  cin >> n >> w;

  vector<int> A(n);

  set<long long> ans;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;

    A[i] = a;

    if (a <= w) ans.insert(a);
  }


  // 3 個選ぶパターン
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      for (int k = j + 1; k < n; ++k) {
        int tmp = A[i] + A[j] + A[k];
        if (tmp <= w) ans.insert(tmp);
      }
    }
  }

  // 2 個選ぶパターン
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      int tmp = A[i] + A[j];
      if (tmp <= w) ans.insert(tmp);
    }
  }

  cout << ans.size() << endl;

  return 0;
}
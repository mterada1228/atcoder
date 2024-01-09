#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> A;

  int cnt = 0;

  for (int i = 0; i < n; ++i) {
    ++cnt;

    int a;
    cin >> a;

    if (A.size() == 0) {
      cout << cnt << endl;
      A.push_back({ a });
      continue;
    }

    if (a == A[A.size() - 1][0]) {
      A[A.size() - 1].push_back(a);

      if (a == A[A.size() - 1].size()) {
        A.pop_back();
        cnt -= a;
      }
    } else {
      A.push_back({ a });
    }

    cout << cnt << endl;
  }

  return 0;
}
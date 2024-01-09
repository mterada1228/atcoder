#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  vector<vector<pair<int, int>>> arr(n + 1);

  for (int i = 0; i < m; ++i) {
    int a, b, c;
    cin >> a >> b >> c;

    arr[a].push_back({ b, c });
    arr[b].push_back({ a, c });
  }

  vector<int> A;

  for (int i = 1; i <= n; ++i) {
    A.push_back(i);
  }

  int ans = 0;

  do {
    int tmp = 0;

    for (int i = 0; i < n - 1; ++i) {
      bool flg = false;

      for (auto e: arr[A[i]]) {
        if (e.first == A[i + 1]) {
          flg = true;
          tmp += e.second;
          break;
        }
      }

      if (flg) {
        continue;
      } else {
        break;
      }
    }

    ans = max(ans, tmp);
  } while(next_permutation(A.begin(), A.end()));

  cout << ans << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  deque<vector<int>> D;

  for (int i = 0; i < n; ++i) {
    D.push_back({ i + 1, 0 });
  }

  for (int i = 0; i < q; ++i) {
    int q_0;
    cin >> q_0;

    if (q_0 == 1) {
      char q_1;
      cin >> q_1;

      if (q_1 == 'U') {
        D.push_front({ D[0][0], D[0][1] + 1 });
      } else if (q_1 == 'D') {
        D.push_front({ D[0][0], D[0][1] - 1});
      } else if (q_1 == 'L') {
        D.push_front({ D[0][0] - 1, D[0][1] });
      } else if (q_1 == 'R') {
        D.push_front({ D[0][0] + 1, D[0][1] });
      }
    }

    if (q_0 == 2) {
      int q_1;
      cin >> q_1;

      cout << D[q_1 - 1][0] << " " << D[q_1 - 1][1] << endl;
   }
  }

  return 0;
}
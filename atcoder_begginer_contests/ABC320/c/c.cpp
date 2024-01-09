#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;

  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;

  vector<vector<vector<int>>> arr(10, vector<vector<int>>(3));

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < 3; ++j) {
      int s1_i = s1[i] - '0';
      int s2_i = s2[i] - '0';
      int s3_i = s3[i] - '0';

      arr[s1_i][0].push_back(i + m * j);
      arr[s2_i][1].push_back(i + m * j);
      arr[s3_i][2].push_back(i + m * j);
    }
  }

  for (int i = 0; i <= 9; ++i) {
    for (int j = 0; j < 3; ++j) {
      sort(arr[i][j].begin(), arr[i][j].end());
    }
  }

  vector<int> A = { 0, 1, 2 };

  int ans = 3 * m;

  for (int i = 0; i <= 9; ++i) {
    int tmp = 3 * m;

    if (arr[i][0].size() == 0 || arr[i][1].size() == 0 || arr[i][2].size() == 0) continue;

    do {
      int stop_1 = arr[i][A[0]][0];

      auto iter_2 = upper_bound(arr[i][A[1]].begin(), arr[i][A[1]].end(), stop_1);
      int stop_2 = *iter_2;

      auto iter_3 = upper_bound(arr[i][A[2]].begin(), arr[i][A[2]].end(), stop_2);
      int stop_3 = *iter_3;

      tmp = min(tmp, stop_3);
    } while(next_permutation(A.begin(), A.end()));

    ans = min(ans, tmp);
  }

  if (ans == 3 * m) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }

  return 0;
}
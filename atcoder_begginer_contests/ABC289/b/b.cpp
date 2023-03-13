#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> A;
  for (int i = 0; i < m; ++i) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  vector<vector<int>> Ans;
  int cur_ind = 0;
  int cur = 1;

  vector<int> ans = {};

  while (cur_ind < A.size()) {
    if (cur != A[cur_ind]) {
      ans.push_back(cur);
      Ans.push_back(ans);
      ans = {};

      for (int j = cur + 1; j < A[cur_ind]; ++j) {
        Ans.push_back({ j });
      }
      
      cur = A[cur_ind];
    } else {
      ans.push_back(cur);
      ++cur;
      ++cur_ind;
    }
  }
  ans.push_back(cur);
  ++cur;

  Ans.push_back(ans);

  for (int i = cur; i <= n; ++i) {
    Ans.push_back({ i });
  }

  for (auto e: Ans) {
    if (e.size() == 0) continue;
    for (int i = e.size() - 1; i >= 0; --i) {
      cout << e[i] << " ";
    }
  }
  cout << endl;

  return 0;
}
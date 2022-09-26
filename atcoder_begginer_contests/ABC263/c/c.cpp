#include <bits/stdc++.h>
using namespace std;

int n, m;

void dfs(vector<int> ans) {
  if (ans.size() == n) {
    for (auto e: ans) {
      cout << e << " ";
    }
    cout << endl;

    return;
  }

  if (ans.size() == 0) {
    for (int i = 1; i <= m; ++i) {
      ans.push_back(i);
      dfs(ans);
      ans.pop_back();
    }
  } else {
    for (int i = ans.back() + 1; i <= m; ++i) {
      ans.push_back(i);
      dfs(ans);
      ans.pop_back();
    }
  }
}

int main() {
  cin >> n >> m;

  vector<int> ans = {};
  dfs(ans);

  return 0;
}
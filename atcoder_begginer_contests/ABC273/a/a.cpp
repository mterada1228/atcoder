#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> ans;

  ans.push_back(1);

  for (int i = 1; i <= n; ++i) {
    ans.push_back(i * ans[i-1]);
  }

  cout << ans[n] << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A(n + 1);
  A.push_back(0);

  for (int i = 1; i <= n; ++i) {
    cin >> A[i];
  }

  vector<bool> called(n + 1, false);

  for (int i = 1; i <= n; ++i) {
    if (called[i] == false) {
      called[A[i]] = true;
    }
  }

  int cnt = 0;
  vector<int> ans;

  for (int i = 1; i <= n; ++i) {
    if (called[i] == false) {
      ++cnt;
      ans.push_back(i);
    }
  }

  cout << cnt << endl;
  for (auto e: ans) {
    cout << e << " ";
  }
  cout << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A(n + 1);
  
  for (int i = 1; i <= n; ++i) {
    cin >> A[i];
  }

  vector<int> fl(n + 1, 0);
  vector<int> s;

  int v = 1;
  while (fl[v] == 0) {
    fl[v] = 1;
    s.push_back(v);
    v = A[v];
  }

  bool flg = false;
  vector<int> res;

  for (auto e: s) {
    if (e == v) flg = true;
    if (flg) res.push_back(e);
  }

  cout << res.size() << endl;
  for (auto e: res) {
    cout << e << " ";
  }
  cout << endl;

  return 0;
}
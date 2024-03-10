#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A(n + 1);
  vector<int> todo(n + 1, 0);

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;

    A[i + 1] = a;

    if (a != -1) {
      todo[a] = 1;
    }
  }

  int g;

  // todo に登場しない番号が終点
  for (int i = 1; i <= n; i++) {
    if (todo[i] == 0) {
      g = i;
      break;
    }
  }

  vector<int> ans;

  int next = A[g];
  ans.push_back(g);

  while (next != -1) {
    ans.push_back(next);
    next = A[next];
  }

  reverse(ans.begin(), ans.end());

  for (auto e: ans) {
    cout << e << " ";
  }

  cout << endl;

  return 0;
}
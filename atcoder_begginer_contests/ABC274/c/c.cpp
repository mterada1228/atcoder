#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> G(2 * n + 2, 0);

  for (int i = 1; i <= n; ++i) {
    int a;
    cin >> a;

    G[2 * i] = G[a] + 1;
    G[2 * i + 1] = G[a] + 1;
  }

  for (int i = 1; i <= 2 * n + 1; ++i) {
    cout << G[i] << endl;
  }

  return 0;
}
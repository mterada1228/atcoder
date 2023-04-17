#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> P(n);
  for (int i = 0; i < n; ++i) {
    cin >> P[i];
  }

  vector<int> Q(n + 1);
  for (int i = 0; i < n; ++i) {
    Q[P[i]] = i + 1;
  }

  for (int i = 1; i <= n; ++i) {
    cout << Q[i] << " ";
  }
  cout << endl;

  return 0;
}
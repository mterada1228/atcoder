#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;

  vector<int> T(n);

  for (int i = 0; i < n; ++i) {
    cin >> T[i];
  }

  for (int i = 0; i < n - 1; ++i) {
    if (T[i + 1] - T[i] <= d) {
      cout << T[i + 1] << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> P;

  for (int i = 0; i < n; ++i) {
    int p;
    cin >> p;

    if (p == x) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}

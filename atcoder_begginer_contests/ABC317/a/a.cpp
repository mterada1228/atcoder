#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, h, x;
  cin >> n >> h >> x;

  vector<int> P;

  for (int i = 0; i < n; ++i) {
    int p;
    cin >> p;
    P.push_back(p);
  }

  for (int i = 0; i < n; ++i) {
    if (h + P[i] >= x) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}
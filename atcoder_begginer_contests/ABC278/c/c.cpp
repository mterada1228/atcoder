#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  map<vector<int>, int> mp;

  for (int i = 0; i < q; ++i) {
    int t, a, b;
    cin >> t >> a >> b;

    if (t == 1) {
      mp[{a, b}] = 1;
    }

    if (t == 2) {
      mp[{a, b}] = 0;
    }

    if (t == 3) {
      if (mp[{a, b}] == 1 && mp[{b, a}] == 1) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }

  return 0;
}
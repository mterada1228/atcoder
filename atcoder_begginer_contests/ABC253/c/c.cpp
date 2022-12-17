#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;

  map<int, long long> mp;

  for (int i = 0; i < q; ++i) {
    int t;
    cin >> t;


    if (t == 1) {
      int x;
      cin >> x;
      ++mp[x];
    }

    if (t == 2) {
      int x, c;
      cin >> x >> c;

      if (mp[x] <= c) {
        mp.erase(x);
      } else {
        mp[x] = mp[x] - c;
      }
    }

    if (t == 3) {
      cout << mp.rbegin()->first - mp.begin()->first << endl;
    }
  }

  return 0;
}
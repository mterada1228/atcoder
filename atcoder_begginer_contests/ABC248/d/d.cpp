#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<map<int, int>> maps(N + 1);

  for (int i = 1; i <= N; ++i) {
    int a;
    map<int, int> mp(maps[i - 1]);
    cin >> a;
    ++mp[a];
    maps[i] = mp;
  } 

  int q;
  cin >> q;

  for (int i = 0; i < q; ++i) {
    int l, r, x;
    cin >> l >> r >> x;
    cout << maps[r][x] - maps[l - 1][x] << endl; 
  }

  return 0;
}
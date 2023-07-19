#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<string> dishes;

  for (int i = 0; i < n; ++i) {
    string d;
    cin >> d;
    dishes.push_back(d);
  }

  vector<string> dishes_p;
  vector<int> prices;

  for (int i = 0; i < m; ++i) {
    string d_p;
    cin >> d_p;
    dishes_p.push_back(d_p);
  }

  for (int i = 0; i <= m; ++i) {
    int p;
    cin >> p;
    prices.push_back(p);
  }

  int p_0 = prices[0];

  map<string, int> mp;

  for (int i = 0; i < m; ++i) {
    mp[dishes_p[i]] = prices[i + 1];
  }

  int ans = 0;
  for (auto e: dishes) {
    if (mp[e] == 0) {
      ans += p_0;
    } else {
      ans += mp[e];
    }
  }

  cout << ans << endl;

  return 0;
}
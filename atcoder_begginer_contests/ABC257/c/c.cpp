#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;

  cin >> n >> s;

  vector<int> all;
  vector<int> adults;
  vector<int> childrens;

  for (int i = 0; i < n; ++i) {
    int w;
    cin >> w;

    all.push_back(w);

    if (s[i] == '0') {
      childrens.push_back(w);
    } else {
      adults.push_back(w);
    }
  }

  sort(all.begin(), all.end());
  sort(childrens.begin(), childrens.end());
  sort(adults.begin(), adults.end());

  vector<int> binds;

  for (auto e: all) {
    binds.push_back(e);
    binds.push_back(e+1);
  }

  int ans = 0;

  for (auto e: binds) {
    auto itr = lower_bound(adults.begin(), adults.end(), e);
    int adult_cnt = adults.end() - itr;

    itr = lower_bound(childrens.begin(), childrens.end(), e);
    int children_cnt = itr - childrens.begin();

    ans = max(ans, adult_cnt + children_cnt);
  }

  cout << ans << endl;

  return 0;
}
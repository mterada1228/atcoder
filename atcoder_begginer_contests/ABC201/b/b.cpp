#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b) {
  return a.second >= b.second;
}

int main() {
  int n;
  cin >> n;

  vector<pair<string, int>> mnts;

  for (int i = 0; i < n; ++i) {
    string s;
    int t;
    cin >> s >> t;

    mnts.push_back(make_pair(s, t));
  }

  sort(mnts.begin(), mnts.end(), compare);

  cout << mnts[1].first << endl;

  return 0;
}
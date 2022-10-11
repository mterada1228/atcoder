#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<set<int>> arr(n+1);

  vector<vector<int>> party;

  for (int i = 0; i < m; ++i) {
    int k;
    cin >> k;

    vector<int> tmp(k);
    for (int j = 0; j < k; ++j) {
      cin >> tmp[j];
    }
    party.push_back(tmp);
  }

  for (auto e: party) {
    for (int i = 0; i < e.size(); ++i) {
      for (int j = 0; j < e.size(); ++j) {
        arr[e[i]].insert(e[j]);
      }
    }
  }

  for (int i = 1; i <= n; ++i) {
    if (arr[i].size() != n) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}
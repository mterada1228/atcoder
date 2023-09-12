#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, char> x, pair<int, char> y) {
  return x.first < y.first;
}

int main() {
  int n, m;
  string s;
  cin >> n >> m >> s;

  vector<vector<pair<int, char>>> array(m);

  for (int i = 0; i < n; ++i) {
    int c;
    cin >> c;
    array[c - 1].push_back({ i, s[i]});
  }

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < array[i].size() - 1; ++j) {
      swap(array[i][j].first, array[i][j + 1].first);
    }
  }

  vector<pair<int, char>> flatten;
  for (auto e: array) {
    for (auto f: e) {
      flatten.push_back(f);
    }
  }

  sort(flatten.begin(), flatten.end(), compare);

  for (auto e: flatten) {
    cout << e.second;
  }
  cout << endl;

  return 0;
}
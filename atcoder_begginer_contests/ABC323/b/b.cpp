#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> x, pair<int, int> y) {
  if (x.second == y.second) {
    return x.first < y.first;
  } else {
    return x.second > y.second;
  }
}

int main() {
  int n;
  cin >> n;

  vector<string> S;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    S.push_back(s);
  }

  vector<pair<int, int>> res;

  for (int i = 0; i < n; ++i) {
    int cnt = 0;

    for (int j = 0; j < n; ++j) {
      if (S[i][j] == 'o') ++cnt;
    }

    res.push_back({ i + 1, cnt });
  }

  sort(res.begin(), res.end(), compare);

  for (auto e: res) {
    cout << e.first << " ";
  }
  cout << endl;

  return 0;
}
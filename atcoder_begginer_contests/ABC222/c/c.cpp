#include <bits/stdc++.h>
using namespace std;

int N, M;

bool compare(pair<int, int> x, pair<int, int> y) {
  if (x.second != y.second) {
    return x.second > y.second;
  } else {
    return x.first < y.first;
  }
}

int main() {
  cin >> N >> M;

  vector<string> G(2 * N);
  vector<pair<int, int>> ans;
  for (int i = 0; i < 2 * N; ++i) {
    string s;
    cin >> s;
    for (int j = 0; j < M; ++j) {
      G[i].push_back(s[j]);
    }

    ans.push_back(make_pair(i, 0));
  }

  for (int i = 0; i < M; ++i) {
    for (int j = 0; j < 2 * N; j += 2) {
      char a = G[ans[j].first][i];
      char b = G[ans[j + 1].first][i];
      if (a == 'G' &&  b == 'C') ++ans[j].second;
      if (a == 'C' &&  b == 'P') ++ans[j].second;
      if (a == 'P' &&  b == 'G') ++ans[j].second;
      if (b == 'G' &&  a == 'C') ++ans[j + 1].second;
      if (b == 'C' &&  a == 'P') ++ans[j + 1].second;
      if (b == 'P' &&  a == 'G') ++ans[j + 1].second;
    }
    sort(ans.begin(), ans.end(), compare);
  }

  for (auto e: ans) {
    cout << e.first + 1 << endl;
  }

  return 0;
}
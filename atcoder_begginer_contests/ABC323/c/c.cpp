#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> x, pair<int, int> y) {
  return x.first > y.first;
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> A;
  vector<pair<int, int>> sorted_A;

  for (int i = 0; i < m; ++i) {
    int a;
    cin >> a;
    A.push_back(a);

    sorted_A.push_back( { a, i });
  }

  vector<string> S;
  vector<int> tots;
  int max_tot = 0;

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    S.push_back(s);

    int tot = 0;

    for (int j = 0; j < m; ++j) {
      if (s[j] == 'o') tot += A[j];
    }

    tot = tot + i + 1;

    max_tot = max(max_tot, tot);
    tots.push_back(tot);
  }

  sort(sorted_A.begin(), sorted_A.end(), compare);

  for (int i = 0; i < n; ++i) {
    int cnt = 0;
    int tmp = tots[i];

    for (auto e: sorted_A) {
      if (tmp >= max_tot) break;

      if (S[i][e.second] == 'o') {
        continue;
      } else {
        ++cnt;
        tmp += e.first;
      }
    }

    cout << cnt << endl;
  }

  return 0;
}
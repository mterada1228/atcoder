#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  vector<pair<char, int>> S, T;

  char cur = s[0];
  int cnt = 0;

  for (int i = 0; i < s.size(); ++i) {
    if (cur == s[i]) {
      ++cnt;
    } else {
      S.push_back({cur, cnt});
      cur = s[i];
      cnt = 1;
    }
  }
  S.push_back({cur, cnt});

  cur = t[0];
  cnt = 0;

  for (int i = 0; i < t.size(); ++i) {
    if (cur == t[i]) {
      ++cnt;
    } else {
      T.push_back({cur, cnt});
      cur = t[i];
      cnt = 1;
    }
  }
  T.push_back({cur, cnt});

  if (S.size() != T.size()) {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 0; i < S.size(); ++i) {
    if (S[i].first == T[i].first && S[i].second == T[i].second) {
      continue;
    }

    if (S[i].first == T[i].first && S[i].second >= 2 && S[i].second < T[i].second) {
      continue;
    }

    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;

  return 0;
}
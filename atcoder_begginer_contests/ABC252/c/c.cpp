#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;

  vector<vector<int>> S(n);

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;

    for (int j = 0; j < 10; ++j) {
      S[i].push_back(s[j] - '0');
    }
  }


  int minimum = 10000;

  for (int i = 0; i < 10; ++i) {
    map<int, int> mp;

    for (int j = 0; j < n; ++j) {
      for (int k = 0; k < 10; ++k) {
        if (S[j][k] == i) ++mp[k];
      }
    }

    int max_cnt = 0;
    for (int j = 0; j < 10; ++j) {
      max_cnt = max(max_cnt, mp[j]);
    }

    int max_cnt_number = 0;
    for (int j = 0; j < 10; ++j) {
      if (mp[j] == max_cnt) {
        max_cnt_number = max(max_cnt_number, j);
      }
    }

    minimum = min(minimum, (max_cnt - 1) * 10 + max_cnt_number);
  }

  cout << minimum << endl;

  return 0;
}
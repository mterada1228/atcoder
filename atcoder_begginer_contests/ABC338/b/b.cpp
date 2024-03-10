#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<int> cnt(123);

  for (auto e: s) {
    cnt[(int) e]++;
  }

  int max_cnt = 0;
  int max_cnt_idx = 0;

  for (int i = 97; i <= 123; ++i) {
    if (max_cnt < cnt[i]) {
      max_cnt = cnt[i];
      max_cnt_idx = i;
    }
  }

  cout << (char) max_cnt_idx << endl;

  return 0;
}
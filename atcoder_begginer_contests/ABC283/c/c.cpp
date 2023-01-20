#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;

  cin >> s;

  int key_cnt = 0;

  int zero_cnt = 0;
  bool zero_flg = false;

  for (int i = 0; i < s.size(); ++i) {
    char cur = s[i];

    if (zero_flg) {
      if (cur != '0') {
        zero_flg = false;
        if (zero_cnt % 2 == 0) {
          key_cnt = key_cnt + zero_cnt / 2 + 1;
        } else {
          key_cnt = key_cnt + zero_cnt / 2 + 2;
        }
        zero_cnt = 0;
      } else {
        ++zero_cnt;
      }
    } else {
      if (cur != '0') {
        ++key_cnt;
      } else {
        zero_flg = true;
        ++zero_cnt;
      }
    }
  }

  if (zero_flg) {
    if (zero_cnt % 2 == 0) {
      key_cnt = key_cnt + zero_cnt / 2;
    } else {
      key_cnt = key_cnt + zero_cnt / 2 + 1;
    }
  }

  cout << key_cnt << endl;

  return 0;
}
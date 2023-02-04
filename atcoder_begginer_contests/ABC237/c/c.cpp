#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string pre_s, mid_s, fix_s;

  int pre_ind;
  for (pre_ind = 0; pre_ind < s.size(); ++pre_ind) {
    if (s[pre_ind] != 'a') break;

    pre_s.push_back(s[pre_ind]);
  }

  int fix_ind;
  for (fix_ind = s.size() - 1; fix_ind >= 0; --fix_ind) {
    if (s[fix_ind] != 'a') break;

    fix_s.push_back(s[fix_ind]);
  }

  for (int i = pre_ind; i <= fix_ind; ++i) {
    mid_s.push_back(s[i]);
  }

  // 条件1 中間部分は回文であること
  for (int i = 0; i < mid_s.size() / 2; ++i) {
    if (mid_s[i] != mid_s[mid_s.size() - 1 - i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  // 条件2 先頭部分の長さは末尾部分の長さ以下であること
  if (pre_s.size() > fix_s.size()) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;

  return 0;
}
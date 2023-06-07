#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int pos_b_l = -1;
  int pos_b_r = -1;
  int pos_k = -1;
  int pos_r_l = -1;
  int pos_r_r = -1;

  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == 'B') {
      if (pos_b_l == -1) {
        pos_b_l = i + 1;
      } else {
        pos_b_r = i + 1;
      }
    }

    if (s[i] == 'K') {
      pos_k = i + 1;
    }

    if (s[i] == 'R') {
      if (pos_r_l == -1) {
        pos_r_l = i + 1;
      } else {
        pos_r_r = i + 1;
      }
    }
  }

  if ((pos_b_l % 2 == 0 && pos_b_r % 2 == 1) || (pos_b_l % 2 == 1 && pos_b_r % 2 == 0)) {
    if (pos_r_l < pos_k && pos_k < pos_r_r) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a_idx = -1;
  int b_idx = -1;
  int c_idx = -1;

  string s;
  cin >> s;

  for (int i = 0; i < n; ++i) {
    if (s[i] == 'A') {
      if (a_idx == -1) {
        a_idx = i + 1;
      }
    }

    if (s[i] == 'B') {
      if (b_idx == -1) {
        b_idx = i + 1;
      }
    }

    if (s[i] == 'C') {
      if (c_idx == -1) {
        c_idx = i + 1;
      }
    }
  }

  int max = a_idx;
  if (max < b_idx) max = b_idx;
  if (max < c_idx) max = c_idx;

  cout << max << endl;

  return 0;
}
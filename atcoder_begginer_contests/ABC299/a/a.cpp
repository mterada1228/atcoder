#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int pipe_l = -1;
  int pipe_r, aster;

  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '|') {
      if (pipe_l == -1) {
        pipe_l = i;
      } else {
        pipe_r = i;
      }
    } else if (s[i] == '*') {
      aster = i;
    }
  }

  if (pipe_l < aster && aster < pipe_r) {
    cout << "in" << endl;
  } else {
    cout << "out" << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int max = -1;
  int l = 0;
  char mode = s[0];

  for (int i = 0; i < n; ++i) {
    if (mode == '-') {
      if (s[i] == '-') {
        continue;
      } else if (s[i] == 'o') {
        mode = 'o';
      }
    } else if (mode == 'o') {
      if (s[i] == '-') {
        if (max <= l) max = l;
        l = 0;
        mode = '-';
      } else if (s[i] == 'o') {
        ++l;
      }
    }
  }

  l = 0;
  mode = s[n - 1];
  for (int i = n - 1; i >= 0; --i) {
    if (mode == '-') {
      if (s[i] == '-') {
        continue;
      } else if (s[i] == 'o') {
        ++l;
        mode = 'o';
      }
    } else if (mode == 'o') {
      if (s[i] == '-') {
        if (max <= l) max = l;
        l = 0;
        mode = '-';
      } else if (s[i] == 'o') {
        ++l;
      }
    }
  }

  cout << max << endl;

  return 0;
}
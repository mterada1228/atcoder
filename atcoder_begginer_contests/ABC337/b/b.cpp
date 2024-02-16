#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int l_a = 0;
  int l_b = 0;

  int f_b = s.size() - 1;
  int f_c = s.size() - 1;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'A') l_a = i;
    if (s[i] == 'B') l_b = i;
  }

  reverse(s.begin(), s.end());

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'B') f_b = s.size() - 1 - i;
    if (s[i] == 'C') f_c = s.size() - 1 - i;
  }

  if (l_a <= f_b && l_a <= f_c && l_b <= f_c) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
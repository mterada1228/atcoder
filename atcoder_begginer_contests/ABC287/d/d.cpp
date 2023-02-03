#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  vector<int> ck(t.size(), 0);
  int ck_cnt = 0;

  string first_s;
  for (int i = 0; i < t.size(); ++i) {
    first_s.push_back(s[s.size() - 1 - i]);
  }
  reverse(first_s.begin(), first_s.end());

  for (int i = 0; i < t.size(); ++i) {
    if (first_s[i] == '?' || t[i] == '?') {
      ++ck_cnt;
      ck[i] = 1;
    } else if (first_s[i] == t[i]) {
      ++ck_cnt;
      ck[i] = 1;
    }
  }

  if (ck_cnt == t.size()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  for (int i = 0; i < t.size(); ++i) {
    if (t[i] == '?') {
      ck[i] = 1;
      if (ck[i] == 0) {
        ++ck_cnt;
      } 
    } else {
      if (s[i] == '?' || s[i] == t[i]) {
        if (ck[i] == 0) {
          ++ck_cnt;
        }
        ck[i] = 1;
      } else {
        if (ck[i] == 1) {
          --ck_cnt;
        }
        ck[i] = 0;
      }
    }

    if (ck_cnt == t.size()) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}
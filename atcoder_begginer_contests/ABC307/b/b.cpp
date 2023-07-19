#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> S;

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    S.push_back(s);
  }

  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      string tmp_1 = S[i] + S[j];
      string tmp_2 = S[j] + S[i];

      bool flg = true;
      for (int k = 0; k < tmp_1.size() / 2; ++k) {
        if (tmp_1[k] != tmp_1[tmp_1.size() - 1 - k]) flg = false;
      }

      if (flg) {
        cout << "Yes" << endl;
        return 0;
      }

      flg = true;

      for (int k = 0; k < tmp_2.size() / 2; ++k) {
        if (tmp_2[k] != tmp_2[tmp_2.size() - 1 - k]) flg = false;
      }

      if (flg) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}
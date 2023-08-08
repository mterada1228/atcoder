#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;

  vector<string> S;

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    S.push_back(s);
  }

  vector<int> days(d, 0);

  for (int i = 0; i < d; ++i) {
    bool flg = true;

    for (int j = 0; j < n; ++j) {
      if (S[j][i] == 'x') flg = false;
    }

    if (flg) days[i] = 1; 
  }

  int max = 0;
  int cnt = 0;

  for (int i = 0; i < d; ++i) {
    if (days[i] == 1) {
      ++cnt;
    } else {
      if (max < cnt) max = cnt;
      cnt = 0;
    }
  }

  if (max < cnt) max = cnt;

  cout << max << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<string> S(h);

  for (int i = 0; i < h; ++i) {
    cin >> S[i];
  }

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w - 1; ++j) {
      if (S[i][j] == 'T' && S[i][j + 1] == 'T') {
        S[i][j] = 'P';
        S[i][j + 1] = 'C';
      }
    }
  }

  for (auto e: S) {
    for (auto f: e) {
      cout << f;
    }
    cout << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> S;
  for (int i = 0; i < 9; ++i) {
    string s;
    cin >> s;
    S.push_back(s);
  }

  set<set<pair<int, int>>> st;

  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      for (int di = -8; di <= 8; ++di) {
        for (int dj = -8; dj <= 8; ++dj) {

          if(di == 0 && dj == 0) continue;

          int i2 = i + di, j2 = j + dj;
          int i3 = i2 - dj, j3 = j2 + di;
          int i4 = i3 - di, j4 = j3 - dj;

          if (
            (i >= 0 && i <= 8 && j >= 0 && j <= 8 && S[i][j] == '#') && 
            (i2 >= 0 && i2 <= 8 && j2 >= 0 && j2 <= 8 && S[i2][j2] == '#') && 
            (i3 >= 0 && i3 <= 8 && j3 >= 0 && j3 <= 8 && S[i3][j3] == '#') && 
            (i4 >= 0 && i4 <= 8 && j4 >= 0 && j4 <= 8 && S[i4][j4] == '#') 
          ) {
            set<pair<int, int>> sq;
            sq.insert({i, j});
            sq.insert({i2, j2});
            sq.insert({i3, j3});
            sq.insert({i4, j4});
            st.insert(sq);
          }
        }
      }
    }
  }

  cout << st.size() << endl;

  return 0;
}
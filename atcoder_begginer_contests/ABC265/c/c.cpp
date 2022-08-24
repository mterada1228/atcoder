#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<char>> G(h + 1, vector<char>(w + 1));
  for (int i = 1; i <= h; ++i) {
    for (int j = 1; j <= w; ++j) {
      cin >> G[i][j];
    }
  }

  vector<vector<int>> seen(h + 1, vector<int>(w + 1, 0));

  int now_i = 1;
  int now_j = 1;

  seen[1][1] = 1;

  while (true) {
    int next_i ,next_j;

    if (G[now_i][now_j] == 'U') {
      if (now_i == 1) {
        cout << now_i << " " << now_j << endl;
        return 0;
      }

      next_i = now_i - 1;
      next_j = now_j;

    } else if (G[now_i][now_j] == 'D') {
      if (now_i == h) {
        cout << now_i << " " << now_j << endl;
        return 0;
      }

      next_i = now_i + 1;
      next_j = now_j;

    } else if (G[now_i][now_j] == 'L') {
      if (now_j == 1) {
        cout << now_i << " " << now_j << endl;
        return 0;
      }

      next_i = now_i;
      next_j = now_j - 1;

    } else if (G[now_i][now_j] == 'R') {
      if (now_j == w) {
        cout << now_i << " " << now_j << endl;
        return 0;
      }

      next_i = now_i;
      next_j = now_j + 1;

    }

    if (seen[next_i][next_j] == 1) {
      cout << "-1" << endl;
      return 0;
    } else {
      now_i = next_i;
      now_j = next_j;
      seen[now_i][now_j] = 1;
    }
  }

  return 0;
}
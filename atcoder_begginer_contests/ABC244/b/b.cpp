#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string T;
  cin >> N >> T;
  vector<int> xy(2, 0);
  vector<vector<int>> dt = {{1, 0}, {0, -1}, {-1, 0}, {0, 1}};
  int t = 0;

  for (int i = 0; i < T.length(); ++i) {
    if (T[i] == 'S') {
      xy[0] = xy[0] + dt[t][0];
      xy[1] = xy[1] + dt[t][1];
    } else {
      t = (t + 1) % 4;
    }
  }

  cout << xy[0] << " " << xy[1] << endl;

  return 0;
}
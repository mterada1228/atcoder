#include <bits/stdc++.h>
using namespace std;

vector<int> di = {0, 1, 0, -1};
vector<int> dj = {1, 0, -1, 0};

int main() {
  int n;
  cin >> n;

  vector<vector<string>> G(n, vector<string>(n, "0"));

  int d = 0;

  G[(n-1)/2][(n-1)/2] = "T";

  vector<int> next = { 0, 0 };

  int cur = 1;

  while (next[0] != (n-1)/2 || next[1] != (n-1)/2) {
    if (
      next[0] < 0 ||
      next[0] >= n || 
      next[1] < 0 || 
      next[1] >= n || 
      G[next[0]][next[1]] != "0"
    ) {
      // 一手戻る
      next[0] = next[0] + (-1) * di[d]; 
      next[1] = next[1] + (-1) * dj[d]; 

      d = (d + 1) % 4;
      next[0] += di[d];
      next[1] += dj[d];
    } else {
      string str_cur = to_string(cur);

      G[next[0]][next[1]] = str_cur;
      ++cur;

      next[0] += di[d];
      next[1] += dj[d];
    }
  }

  for (auto e: G) {
    for (auto f: e) {
      cout << f << " ";
    }
    cout << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  map<vector<int>, int> A;

  vector<int> cur = { 0, 0 }; 
  ++A[{0, 0}];

  for (auto e: s) {
    if (e == 'R') {
      cur = { cur[0] + 1, cur[1] };
    } else if (e == 'L') {
      cur = { cur[0] - 1, cur[1] };
    } else if (e == 'U') {
      cur = { cur[0], cur[1] + 1 };
    } else {
      cur = { cur[0], cur[1] - 1 };
    }

    if (A[cur] >= 1) {
      cout << "Yes" << endl;
      return 0;
    } else {
      ++A[cur];
    }
  }

  cout << "No" << endl;

  return 0;
}
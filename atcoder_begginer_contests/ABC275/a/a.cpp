#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  cin >> n;

  int ans = -1;
  int max_height = 0;

  for (int i = 0; i < n; ++i) {
    int h;

    cin >> h;

    if (max_height < h) {
      ans = i + 1;
      max_height = h;
    }
  }

  cout << ans << endl;

  return 0;
}
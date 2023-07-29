#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int sum = 0;
  int room = 0;

  for (int i = 1; i <= n; ++i) {
    room += 100;
    for (int j = 1; j <= k; ++j) {
      room += 1;
      sum += room;
    }
    room -= k;
  }

  cout << sum << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;

  cin >> a >> b;

  set<int> arr;

  if (a == 1 || a == 3 || a == 5 || a == 7) {
    arr.insert(1);
  }

  if (b == 1 || b == 3 || b == 5 || b == 7) {
    arr.insert(1);
  }

  if (a == 2 || a == 3 || a == 6 || a == 7) {
    arr.insert(2);
  }

  if (b == 2 || b == 3 || b == 6 || b == 7) {
    arr.insert(2);
  }

  if (a == 4 || a == 5 || a == 6 || a == 7) {
    arr.insert(4);
  }

  if (b == 4 || b == 5 || b == 6 || b == 7) {
    arr.insert(4);
  }


  int ans = 0;

  for (auto e: arr) {
    ans += e;
  }

  cout << ans << endl;

  return 0;
}
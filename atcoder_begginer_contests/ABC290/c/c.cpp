#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  set<int> A;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    A.insert(a);
  }

  int cur = 0; 
  for (auto e: A) {
    if (k > 0 && e == cur) {
      cur += 1;
      k -= 1;
    } else {
      cout << cur << endl;
      return 0;
    }
  }

  cout << cur << endl;

  return 0;
}
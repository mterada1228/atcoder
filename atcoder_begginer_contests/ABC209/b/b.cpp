#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  for (int i = 1; i <= n; ++i) {
    int a;
    cin >> a;

    if (i % 2 == 0) {
      x = x - a + 1;
    } else {
      x = x - a;
    }
  }


  if (x >= 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
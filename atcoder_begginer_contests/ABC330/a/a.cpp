#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;

  int sum = 0;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;

    if (a >= l) ++sum;
  }

  cout << sum << endl;

  return 0;
}
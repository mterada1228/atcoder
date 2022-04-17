#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;

  cin >> N >> X;

  int sum = 0;

  for (int i = 0; i < N; ++i) {
    int v, p;
    cin >> v >> p;

    sum += v * p;

    if (sum > 100 * X) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}
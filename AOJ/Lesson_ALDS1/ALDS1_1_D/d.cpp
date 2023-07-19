#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long> R;

  for (int i = 0; i < n; ++i) {
    long long r;
    cin >> r;
    R.push_back(r);
  }

  long long min = R[0];
  long long max_diff = -1000000000;

  for (int i = 1; i < n; ++i) {
    if (max_diff <= R[i] - min) max_diff = R[i] - min;
    if (min > R[i]) min = R[i];
  }

  cout << max_diff << endl;

  return 0;
}
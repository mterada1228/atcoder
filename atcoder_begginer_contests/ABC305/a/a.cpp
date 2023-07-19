#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> w;

  for (int i = 0; i <= 100; i = i + 5) {
    w.push_back(i);
  }

  int min = 101;
  int min_ind = - 1;

  for (int i = 0; i < w.size(); ++i) {
    if (min > abs(n - w[i])) {
      min_ind = i;
      min = abs(n - w[i]);
    }
  }

  cout << w[min_ind] << endl;

  return 0;
}
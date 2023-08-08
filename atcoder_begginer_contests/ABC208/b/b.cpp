#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;

  vector<int> coins;
  int cur = 1;
  for (int i = 1; i <= 10; ++i) {
    cur *= i;
    coins.push_back(cur);
  }

  reverse(coins.begin(), coins.end());

  int sum = 0;

  for (int i = 0; i < 10; ++i) {
    while (true) {
      p -= coins[i];

      if (p >= 0) {
        ++sum;
      } else {
        p += coins[i];
        break;
      }
    }
  }

  cout << sum << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 3;
  vector<int> candies;

  for (int i = 0; i < n; ++i) {
    int candy;
    cin >> candy;
    candies.push_back(candy);
  }
  
  for (int bit = 0; bit < (1<<n); ++bit) {
    int sum_a = 0;
    int sum_b = 0;

    for (int i = 0; i < n; ++i) {
      if (bit & (1<<i)) {
        sum_a += candies[i];
      } else {
        sum_b += candies[i];
      }
    }

    if (sum_a == sum_b) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}
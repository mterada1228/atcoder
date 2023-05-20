#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  int min_cost = 2147483647;

  for (int i = -100; i <= 100; ++i) {
    int cost = 0;

    for (int j = 0; j < n; ++j) {
      cost = cost + ( (A[j] - i) * (A[j] - i) );
    }

    min_cost = min(min_cost, cost); 
  }

  cout << min_cost << endl;

  return 0;
}
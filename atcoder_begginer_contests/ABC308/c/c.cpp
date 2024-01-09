#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, long double> x, pair<int, long double> y) {
  if (x.second != y.second) {
    return x.second > y.second;
  } else {
    return x.first < y.first;
  }
}

int main() {
  int n;
  cin >> n;

  vector<pair<int, long double>> arr;

  for (int i = 0; i < n; ++i) {
    long double a, b;
    cin >> a >> b;

    arr.push_back({ i, a / (a + b) });
  }

  sort(arr.begin(), arr.end(), compare);

  for (auto e: arr) {
    cout << e.first + 1 << " ";
  }

  cout << endl;

  return 0;
}
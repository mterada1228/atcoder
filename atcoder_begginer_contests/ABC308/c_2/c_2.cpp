#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, pair<long long, long long>> x, pair<int, pair<long long, long long>> y) {
  long long x_p = x.second.first * (y.second.first + y.second.second);
  long long y_p = y.second.first * (x.second.first + x.second.second);

  if (x_p != y_p) {
    return x_p > y_p;
  } else {
    return x.first < y.first;
  }
}

int main() {
  int n;
  cin >> n;

  vector<pair<int, pair<long long, long long>>> arr;

  for (int i = 0; i < n; ++i) {
    long long a, b;
    cin >> a >> b;

    arr.push_back({ i, { a, b } });
  }

  sort(arr.begin(), arr.end(), compare);

  for (auto e: arr) {
    cout << e.first + 1 << " ";
  }
  cout << endl;

  return 0;
}
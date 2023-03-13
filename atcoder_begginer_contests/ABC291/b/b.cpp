#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<double> X;

  for (int i = 0; i < 5 * n; ++i) {
    double x;
    cin >> x;
    X.push_back(x);
  }

  sort(X.begin(), X.end());

  for (int i = 0; i < n; ++i) {
    X.pop_back();
  }

  reverse(X.begin(), X.end());

  for (int i = 0; i < n; ++i) {
    X.pop_back();
  }

  double sum = 0;
  for (auto e: X) {
    sum += e;
  }

  double avg = sum / X.size();

  cout << setprecision(10) << avg << endl;

  return 0;
}
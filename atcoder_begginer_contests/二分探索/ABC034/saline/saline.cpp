#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
#include <iomanip>
using namespace std;

int N, K;
vector<double> w, p;

bool check(double x) {
  vector<double> A(N);
  for (int i = 0; i < N; ++i) {
    A[i] = p[i] * w[i] - x * w[i];
  }

  sort(A.begin(), A.end(), greater<double>());

  double sum = accumulate(A.begin(), A.begin() + K, 0.0);

  return sum >= x;
}

int main() {
  cin >> N >> K;

  w.resize(N);
  p.resize(N);

  for (int i = 0; i < N; ++i) cin >> w[i] >> p[i];

  // 二分探索
  double ng = 0.0;
  double ok = 100.0;

  while (ok - ng > 1e-12) {
    double mid = (ok + ng) / 2.0;

    if (check(mid)) ng = mid;
    else ok = mid;
  }
  
  cout << setprecision(10) << ok << endl;
}
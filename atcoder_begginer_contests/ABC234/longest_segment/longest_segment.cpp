#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;

int N;

template<class T> void chmax(T& a, T b) {
  if (a < b) {
    a = b;
  }
}

int main() {
  cin >> N;

  vector<vector<double>> xy(N, vector<double>(2, 0));

  double res = 0;

  for (int i = 0; i < N; ++i) {
    cin >> xy[i][0] >> xy[i][1];
  }

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      double length = sqrt(pow((xy[j][0] - xy[i][0]), 2) + pow((xy[j][1] - xy[i][1]), 2));
      chmax(res, length);
    }
  }

  cout << setprecision(10) << res << endl;
  return 0;
}
#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N, X;
vector<int> sum_b_minus_a;

int main() {
  cin >> N >> X;

  int sum_a = 0;
  sum_b_minus_a.push_back(0);

  for (int i = 1; i <= N; ++i) {
    int a;
    int b;

    cin >> a >> b;
    sum_a += a;

    sum_b_minus_a.push_back(sum_b_minus_a[i - 1] + b - a);
  }

  if (sum_a == X) {
    cout << "Yes" << endl;
    return 0;
  }

  if (sum_a > X) {
    cout << "No" << endl;
    return 0;
  }

  int x_minus_sum_a = X - sum_a;

  cout << "debug" << endl;
  for (auto e: sum_b_minus_a) {
    cout << e << endl;
  }

  for (int i = 0; i <= N + 1; ++i) {
    for (int j = 0; j <= N + 1; ++j) {
      if (x_minus_sum_a == sum_b_minus_a[j] - sum_b_minus_a[i]) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}
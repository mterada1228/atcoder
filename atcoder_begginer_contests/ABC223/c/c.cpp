#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N, sumA;
vector<double> A, B, sum_t_from_left, sum_t_from_right, sum_x_from_left, sum_x_from_right;

bool check(double T) {
  double left, right;

  int left_index;
  left_index = lower_bound(sum_t_from_left.begin(), sum_t_from_left.end(), T) - sum_t_from_left.begin() - 1;
  left = sum_x_from_left[left_index];

  if (left > sumA) return true;

  left += (T - sum_t_from_left[left_index]) * B[left_index];

  cout << left << endl;

  int right_index;
  right_index = lower_bound(sum_t_from_right.begin(), sum_t_from_right.end(), T) - sum_t_from_right.begin() - 1;
  right = sum_x_from_right[right_index];

  if (right > sumA) return true;

  right += (T - sum_t_from_right[right_index]) * B[N - 1 - right_index];

  if ( (left + right) > sumA ) return true;
  else return false;
}

int main() {
  cin >> N;
  sumA = 0;
  A.resize(N);
  B.resize(N);
  sum_t_from_left.resize(N + 1);
  sum_t_from_right.resize(N + 1);
  sum_x_from_left.resize(N + 1);
  sum_x_from_right.resize(N + 1);

  sum_t_from_left[0] = 0;
  sum_t_from_right[0] = 0;
  sum_x_from_left[0] = 0;
  sum_x_from_right[0] = 0;

  for (int i = 0; i < N; ++i) {
    cin >> A[i] >> B[i];
    sumA += A[i];

    sum_t_from_left[i + 1] = sum_t_from_left[i] + A[i] / B[i];
    sum_x_from_left[i + 1] = sum_x_from_left[i] + A[i];
  }

  for (int i = N - 1; i >= 0; --i) {
    sum_t_from_right[N - i] = sum_t_from_right[N - i - 1] + A[i] / B[i];
    sum_x_from_right[N - i] = sum_x_from_right[N - i - 1] + A[i];
  }

  double ng = 0;
  double ok = 100000000;

  while (ok - ng > 0.000001) {
    double mid = (ok + ng) / 2.0;
    if (check(mid)) ok = mid;
    else ng = mid;
  }

  cout << ok << endl;

  return 0;
}
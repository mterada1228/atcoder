#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, K;
vector<int64_t> A, B;

bool check(int64_t X) {
  int64_t cnt = 0;
  for (int i = 0; i < N; ++i) {
    cnt += upper_bound(B.begin(), B.end(), X / A[i]) - B.begin();
  }
  return cnt >= K;
}

int main() {
  cin >> N >> K;

  A.resize(N);
  B.resize(N);

  for (int i = 0; i < N; ++i) cin >> A[i];
  for (int i = 0; i < N; ++i) cin >> B[i];

  sort(B.begin(), B.end());

  int64_t left = 0;
  int64_t right = 1e+18;
  int64_t mid;

  while (right - left > 1) {
    mid = (right + left) / 2;
    if (check(mid)) right = mid;
    else left = mid;
  }

  cout << right << endl;
}
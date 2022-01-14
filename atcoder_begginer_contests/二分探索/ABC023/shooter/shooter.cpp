#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<vector<int>> HS;

bool check(int64_t X) {
  vector<int64_t> T(N, 0);

  bool ok = true;
  for (int i = 0; i < N; ++i) {
    if (X < HS[i][0]) ok = false;
    else T[i] = (X - HS[i][0]) / HS[i][1];
  }
  sort(T.begin(), T.end());
  for (int i = 0; i < N; ++i) {
    if (T[i] < i) ok = false;
  }

  return ok;
}

int main() {
  cin >> N;

  HS.resize(N);
  for (int i = 0; i < N; ++i) HS[i].resize(2);

  for (int i = 0; i < N; ++i) cin >> HS[i][0] >> HS[i][1];

  // 二分探索
  int64_t left = 0;
  int64_t right = 1e+18;
  int64_t mid;

  while (right - left > 1) {
    mid = (left + right) / 2;
    if (check(mid)) right = mid;
    else left = mid;
  }

  cout << right << endl;
}
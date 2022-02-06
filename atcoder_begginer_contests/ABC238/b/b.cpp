#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N;

int main() {
  cin >> N;
  vector<int> A;

  A.push_back(0);

  for (int i = 0; i < N; ++i) {
    int a;
    cin >> a;

    if (A.back() + a > 360) a = A.back() + a - 360;
    else a = A.back() + a;

    A.push_back(a); 
  } 

  A.push_back(360);
  sort(A.begin(), A.end());

  int res = 0;
  for (int i = 0; i < A.size() - 1; ++i) {
    int sa = A[i + 1] - A[i];
    res = max(res, sa);
  }

  cout << res << endl;

  return 0;
}
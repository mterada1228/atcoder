#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N, X;

int main() {
  cin >> N >> X;

  vector<int> A(N, 0);
  vector<bool> seen(N, false);
  for (int i = 0; i < N; ++i) { 
    int tmp;
    cin >> tmp;
    A[i] = tmp - 1;
  }

  int cnt = 0;
  int i = X - 1;
  while (seen[i] == false) {
    ++cnt;
    seen[i] = true;

    i = A[i];
  }

  cout << cnt << endl;

  return 0;
}
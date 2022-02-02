#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N, Q, cnt;
vector<int> A;

int main() {
  cin >> N >> Q;
  A.resize(N);
  for (int i = 0; i < N; ++i) cin >> A[i];
  sort(A.begin(), A.end());

  for (int i = 0; i < Q; ++i) {
    int x;
    cin >> x;

    // x 以上の値が現れるインデックスから、配列の末尾までの距離を取得
    int a = A.end() - lower_bound(A.begin(), A.end(), x);

    cout << a << endl;
  }

  return 0;
}
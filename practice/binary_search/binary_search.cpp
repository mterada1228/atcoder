#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N-1);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  
  int right = A[N-1];
  int left = A[0];
  int mid;

  // 二分探索
  while (right - left > 1) {
    mid = (right - left) / 2;
    if (mid > K) {
      right = mid;
    } else {
      left = mid;
    }
    cout << mid << endl;
  }
  cout << right << endl;
}
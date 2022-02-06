#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

template<class T> void chmax(T& a, T b) {
  if (a < b) {
    a = b;
  }
}

string S;
int K;

int main() {
  cin >> S >> K; 
  int N = S.length(); 

  // しゃくとり法を用いて全区間で X が最大となる区間を求める
  // ただし、 . を X に変えられるのは K 回までなので、 . の累積和が K を超えた時点で探索は終了する

  // . の累積和を求める
  vector<int> Sum(N + 1, 0);

  Sum[0] = 0;
  for (int i = 0; i < N; ++i) {
    if (S[i] == '.') Sum[i + 1] = Sum[i] + 1;
    else Sum[i + 1] = Sum[i];
  } 

  // しゃくとり法
  int ans = 0;
  for (int left = 0; left < N - 1; ++left) {
    int right = left + 1;
    while ( (right <= N) && (Sum[right] - Sum[left] <= K) ) {
      ++right;
    }
    ans = max(ans, right - left);
  }

  cout << ans << endl;

  return 0;
}
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<long long> P(N);
  for (int i = 0; i < N; ++i) {
    cin >> P[i];
  }

  // dp
  int maxP = accumulate(P.begin(), P.end(), 0);
  vector<vector<long long>> dp(N, vector<long long>(maxP, 0));

  // dp ループ
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < maxP; ++j) {
      
    }
  }
}
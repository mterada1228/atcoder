#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N, W;

bool cmp (pair<long long, long long> a, pair<long long, long long> b) {
  return a.first > b.first;
}

int main() {
  cin >> N >> W;
  vector<pair<long long, long long>> C(N);

  for (int i = 0; i < N; ++i) cin >> C[i].first >> C[i].second;

  // 貪欲法
  sort(C.begin(), C.end(), cmp);

  long long taste = 0;
  long long current_sum = 0;
  for (int i = 0; i < N; ++i) {
    if (current_sum + C[i].second > W) {
      taste += C[i].first * (W - current_sum);
      break;
    } else {
      taste += C[i].first * C[i].second;
      current_sum += C[i].second;
    }
  }
  
  cout << taste << endl;

  return 0;
}
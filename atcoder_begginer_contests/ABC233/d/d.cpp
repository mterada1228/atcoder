#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;

int N;
long long K, cnt;
vector<int> A, S;

int main() {
  cin >> N >> K;

  A.resize(N);
  S.resize(N + 1);

  for (int i = 0; i < N; ++i) cin >> A[i];

  S[0] = 0;
  for (int i = 1; i <= N; ++i) S[i] = S[i - 1] + A[i];

  cnt = 0;
  map<long long, long long> mp; 
  for (int r = 1; r <= N; ++r) {
    // r = i の時を例に取ると、0 ~ i までの区間で、
    // r に対する l - 1 までの部分和の数がマップに記録されている。
    mp[S[r-1]]++;
    // S[r] - S[l - 1] = K, つまり S[l - 1] = S[r] - K となる数が、
    // l-1 から r までで、 K となる部分和の数に等しい。 
    cnt += mp[S[r] - K];
  }

  cout << cnt << endl;

  return 0;
}
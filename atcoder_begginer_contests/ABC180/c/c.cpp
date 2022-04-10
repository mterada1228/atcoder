#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  cin >> N;

  vector<long long> A;

  for (long long i = 1; pow(i, 2) <= N; ++i) {
    if (N % i == 0) {
      A.push_back(i);
      if (i != N / i) A.push_back(N / i);
    }
  }

  sort(A.begin(), A.end());

  for (auto e: A) {
    cout << e << endl;
  }

  return 0;
}

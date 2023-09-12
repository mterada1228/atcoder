#include <bits/stdc++.h>
using namespace std;

bool compare(long long x, long long y) {
  return x > y;
}

int main() {
  long long n, d, p;
  cin >> n >> d >> p;

  vector<long long> F;
  long long sum = 0;

  for (int i = 0; i < n; ++i) {
    long long f;
    cin >> f;
    F.push_back(f);

    sum += f;
  }

  sort(F.begin(), F.end(), compare);

  long long cur = 0;
  long long diff = 0;

  for (long long i = 1; i <= (n + d - 1) / d; ++i) {
    long long new_diff = diff;

    long long tmp = 0;

    for (long long j = cur; j < i * d; ++j) {
      if (j < F.size()) tmp += F[j];
      ++cur;
    }

    new_diff = new_diff + p - tmp;  

    if (new_diff > diff) break;

    diff = new_diff;
  }

  cout << sum + diff << endl; 

  return 0;
}
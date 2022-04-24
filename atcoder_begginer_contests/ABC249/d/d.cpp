#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> A(n);

  for (int i = 0; i < n; ++i) cin >> A[i];

  map<int, long long> mp;

  for (int i = 0; i < n; ++i) {
    ++mp[A[i]];
  }

  long long result = 0;

  for (auto iter = mp.begin(); iter != mp.end(); iter++) {
    vector<long long> divisor;
    divisor.push_back(1);
    for (long long i = 1; i < iter->first; ++i) {
      if (iter->first % i == 0) {
        divisor.push_back(iter->first / i);
      }
    }

    for (int i = 0; i < divisor.size() - 1; i += 2) {
      result += (iter->second * mp[divisor[i]] * mp[divisor[i + 1]] * 2);
    }
  }

  cout << result << endl;

  return 0;
}
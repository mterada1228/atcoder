#include <bits/stdc++.h>
using namespace std;

bool compare(long long x, long long y) {
  return x > y;
}

int main() {
  int n;
  cin >> n;

  vector<long long> A(n);

  vector<long long> odds;
  vector<long long> evens;

  for (int i = 0; i < n; ++i) {
    long long a;
    cin >> a;

    A[i] = a;

    if (a % 2 == 0) {
      evens.push_back(a);
    } else {
      odds.push_back(a);
    }
  }

  sort(odds.begin(), odds.end(), compare);
  sort(evens.begin(), evens.end(), compare);

  // 偶数が存在しないのは、奇数が1つ、偶数が1つの長さ2の配列のみ
  if (A.size() == 2) {
    if ((A[0] + A[1]) % 2 == 1) {
      cout << -1 << endl;
      return 0;
    }
  }

  // 奇数の配列が2未満なら、偶 + 偶 が答え
  if (odds.size() < 2) {
    cout << evens[0] + evens[1] << endl;
    return 0;
  }

  // 偶数の配列が2未満なら、奇 + 奇 が答え
  if (evens.size() < 2) {
    cout << odds[0] + odds[1] << endl;
    return 0;
  }

  // 奇 + 奇 or 偶 + 偶 のうち、大きい方が答え
  cout << max(evens[0] + evens[1], odds[0] + odds[1]) << endl;

  return 0;
}
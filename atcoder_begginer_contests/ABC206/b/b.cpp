#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  int i = 0;
  long long sum = 0;

  while (n > sum) {
    sum += i;
    ++i;
  }

  cout << i - 1 << endl;

  return 0;
}
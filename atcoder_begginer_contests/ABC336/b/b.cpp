#include <bits/stdc++.h>
using namespace std;

string toBinary(long long n) {
  string res;
  while(n != 0) {
    res.push_back('0' + (n % 2));
    n /= 2;
  }
  reverse(res.begin(), res.end());
  return res;
}

int main() {
  long long n;
  cin >> n;

  string bi = toBinary(n);

  reverse(bi.begin(), bi.end());

  int cnt = 0;

  for (auto e: bi) {
    if (e == '0') {
      cnt++;
    } else {
      break;
    }
  }

  cout << cnt << endl;

  return 0;
}
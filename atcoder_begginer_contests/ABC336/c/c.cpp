#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  --n;

  string res;

  if (n == 0) {
    cout << '0' << endl;
    return 0;
  }

  while (n != 0) {
    res.push_back('0' + (n % 5));
    n /= 5;
  }
  reverse(res.begin(), res.end());

  for (int i = 0; i < res.size(); ++i) {
    if (res[i] == '0') {
      res[i] = '0';
    } else if (res[i] == '1') {
      res[i] = '2'; 
    } else if (res[i] == '2') {
      res[i] = '4';
    } else if (res[i] == '3') { 
      res[i] = '6';
    } else if (res[i] == '4') {
      res[i] = '8';
    }
  }

  cout << res << endl;

  return 0;
}
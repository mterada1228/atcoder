#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <regex>
using namespace std;

long long K;

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
  cin >> K;

  // 文字 "1" を "2" に置換する
  cout << regex_replace(toBinary(K), regex("1"), "2") << endl;

  return 0;
}

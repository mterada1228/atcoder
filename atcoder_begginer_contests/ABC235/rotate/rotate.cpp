#include <iostream>
using namespace std;

string s;

int main() {
  cin >> s;

  int sum = 0;

  // char -> int に変換する
  int a = s[0] - '0';
  int b = s[1] - '0';
  int c = s[2] - '0';

  sum += 100 * (a + b + c);
  sum += 10 * (a + b + c);
  sum += (a + b + c);

  cout << sum << endl;
}
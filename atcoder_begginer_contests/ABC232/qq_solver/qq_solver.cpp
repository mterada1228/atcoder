#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int a, b;
string s;

int main() {
  cin >> s;

  a = s[0] - '0';
  b = s[2] - '0';

  cout << a * b << endl;

  return 0;
}
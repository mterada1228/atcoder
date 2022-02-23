#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if ( ((a + 1) % 10 == b % 10) || ((a - 1) % 10 == b % 10) ) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
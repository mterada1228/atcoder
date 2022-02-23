#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int X;

int main() {
  cin >> X;

  if ( (X % 100 == 0) && (X / 100 != 0) ) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
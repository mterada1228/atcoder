#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int n;

int main() {
  cin >> n;

  if (pow(2, n) > pow(n, 2)) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
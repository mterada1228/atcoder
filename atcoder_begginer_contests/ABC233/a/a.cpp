#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int X, Y, price, cnt;

int main() {
  cin >> X >> Y;

  price = Y - X;
  cnt = 0;

  while (price > 0) {
    cnt += 1;
    price -= 10;
  }

  cout << cnt << endl;

  return 0;
}
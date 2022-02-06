#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int S, T, X;

int main() {
  cin >> S >> T >> X;

  if (S <= T) {
    if (S <= X && X < T) cout << "Yes" << endl;
    else cout << "No" << endl;
  } else {
    if ( ( S <= X && X <= 23 ) || ( 0 <= X && X < T) ) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}
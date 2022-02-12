#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N, K, A;

int main() {
  cin >> N >> K >> A;

  int ans = (A + K - 1) % N;
  
  if (ans == 0) ans = N;

  cout << ans << endl;

  return 0;
}
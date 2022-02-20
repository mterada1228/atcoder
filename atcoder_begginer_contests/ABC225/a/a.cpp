#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

string S;

int main() {
  cin >> S;
  int cnt = 0;

  sort(S.begin(), S.end());

  do {
    cnt++;
  } while (next_permutation(S.begin(), S.end()));

  cout << cnt << endl;

  return 0;
}
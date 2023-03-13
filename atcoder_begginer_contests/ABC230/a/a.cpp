#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stdio.h>
using namespace std;

int N;

int main() {
  char numStr[256];

  cin >> N;

  if (N >= 42) ++N;

  if (N  >= 10) {
    sprintf(numStr, "AGC0%d", N);
  } else {
    sprintf(numStr, "AGC00%d", N);
  }

  cout << numStr << endl;

  return 0;
}
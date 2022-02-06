#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

string S1, S2;

int main() {
  cin >> S1 >> S2;

  if (S1[0] == '#' && S1[1] == '.' && S2[0] == '.' && S2[1] == '#') {
    cout << "No" << endl;
    return 0;
  }

  if (S1[0] == '.' && S1[1] == '#' && S2[0] == '#' && S2[1] == '.') {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;

  return 0;
}
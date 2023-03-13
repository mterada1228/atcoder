#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

string S, T;

int main() {
  cin >> S;

  T = "oxxoxxoxxoxx";

  for (int i = 0; i <= T.length() - S.length(); ++i) {
    if (S[0] == T[i]) {
      int j;
      for (j = 0; j < S.length(); ++j) {
        if (S[j] != T[i + j]) break;
      }
      if (j == S.length()) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}
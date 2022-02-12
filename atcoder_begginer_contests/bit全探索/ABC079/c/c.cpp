#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

string S;
int N = 4;

int main() {
  cin >> S;

  int ans = 0;

  for (int bit = 0; bit < (1 << N); ++bit) {
    ans = S[0] - '0';
    for (int i = 1; i < N; ++i) {
      if (bit & (1 << i)) {
        ans += S[i] - '0';
      } else {
        ans -= S[i] - '0';
      }
    }

    if (ans == 7) {
      cout << S[0]; 
      for (int i = 1; i < N; ++i) {
        if (bit & (1 << i)) {
          cout << "+" << S[i];
        } else {
          cout << "-" << S[i];
        }
      }
      cout << "=7" << endl;
      return 0;
    }
  }
}
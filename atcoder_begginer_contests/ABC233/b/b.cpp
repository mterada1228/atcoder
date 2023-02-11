#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;


int L, R;
string S;
string ans;

int main() {
  cin >> L >> R >> S;

  string tmp1;
  for (int i = 0; i < L - 1; ++i) {
    tmp1.push_back(S[i]);
  }

  string tmp2;
  for (int i = L - 1; i < R; ++i) {
    tmp2.push_back(S[i]);
  }
  reverse(tmp2.begin(), tmp2.end());

  string tmp3;
  for (int i = R; i < S.length(); ++i) {
    tmp3.push_back(S[i]);
  }

  cout << tmp1 + tmp2 + tmp3 << endl;

  return 0;
}
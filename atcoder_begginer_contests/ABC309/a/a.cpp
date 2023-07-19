#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int a_i;
  int a_j;

  if (a % 3 == 0) {
    a_i = a / 3 - 1;
    a_j = 2;
  } else {
    a_i = a / 3;
    a_j = a % 3 - 1;
  }

  int b_i;
  int b_j;

  if (b % 3 == 0) {
    b_i = b / 3 - 1;
    b_j = 2;
  } else {
    b_i = b / 3;
    b_j = b % 3 - 1;
  }

  if (a_i == b_i) {
    if (b_j == a_j + 1 || b_j == a_j - 1) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}
#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

string A, B;

int main() {
  cin >> A >> B;

  if (A < B) swap(A, B);

  reverse(A.begin(), A.end());
  reverse(B.begin(), B.end());

  for (int i = 0; i < A.length(); ++i) {
    int a = (int)(A[i] - '0');
    int b = (int)(B[i] - '0');

    if (a + b > 9) {
      cout << "Hard" << endl;
      return 0;
    }
  }

  cout << "Easy" << endl;

  return 0;
}
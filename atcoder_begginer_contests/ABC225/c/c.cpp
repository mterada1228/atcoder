#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N, M;

int main() {
  cin >> N >> M;

  int B00;
  cin >> B00;

  int Bi = B00 / 7;
  int Bj = B00 % 7;

  for (int i = Bi; i < Bi + N; ++i) {
    for (int j = Bj; j < Bj + M; ++j) {
      if (i == Bi && j == Bj) continue;

      int b;
      cin >> b;

      if (b != i * 7 + j) {
        cout << "No" << endl;
        return 0;
      }

      if (j > 6) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
  return 0;
}
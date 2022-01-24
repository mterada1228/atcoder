#include <iostream>
#include <cmath>
using namespace std;

// i の桁数を求める
int GetDigit(int i) {
  int digit = 0;
  while(i != 0) {
    i /= 10;
    digit++;
  }
  return digit;
}

// void createGraph(int i) {
//   while (i )
// }

int a, N;

int main() {
  cin >> a >> N;

  cout << pow(10, (GetDigit(N) + 1)) << endl;

  return 0;
}
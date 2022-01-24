#include <iostream>
using namespace std;

int N;

int main() {
  cin >> N;

  int res = 0;

  for (int i = 0; i < N; ++i) {
    int h;
    cin >> h;
    if (res >= h) break;
    else res = h;
  }

  cout << res << endl;
}
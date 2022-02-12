#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N;

int main() {
  cin >> N;

  vector<int> arr;
  for (int a = 0; a <= 150; ++a) {
    for (int b = 0; b <= 150; ++b) {
      arr.push_back(4 * a * b + 3 * a + 3 * b);
    }
  }

  int res = 0;

  for (int i = 0; i < N; ++i) {
    int S;
    bool flg = false;
    cin >> S;
    for (auto e: arr) {
      if (e == S) {
        flg = true;
        break;
      }
    }
    // 見つかった場合は何もしない
    if (flg) continue;
    ++res;
  }

  cout << res << endl;

  return 0;
}
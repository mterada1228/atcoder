#include <iostream>
#include <vector>
using namespace std;

int64_t R, B, x, y;

int check(int64_t X) {
  // 作成できる花の本数が X より少なければ true
  if (((R - X) / (x - 1)) + ((B - X) / (y - 1)) < X) return true;
  return false;
}

int main() {
	cin >> R >> B >> x >> y;

  // 二分探索
  int64_t right = 1e+18;
  int64_t left = 0;

  while ( right - left > 1 ) {
    int64_t mid = (left + right) / 2;
    if (check(mid)) right = mid;
    else left = mid;
  }

  cout << left << endl;
}
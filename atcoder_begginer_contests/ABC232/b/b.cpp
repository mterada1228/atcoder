#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

string S, T;

int main() {

  cin >> S >> T;

  for (int i = 0; i <= 25; ++i) {
    string tmp = S;
    for (int j = 0; j < S.length(); ++j) {
      // S[j] - 'a' で 'a' = 0 のアスキー文字番号に変換
      // + k することで、 'a' = 0 から k 番目後の文字を意味する
      // 26 を超えた場合は、一周して 'a' から k - 26 番目後を返す
      // + 'a' することで、元々のアスキー文字番号に戻す
      tmp[j] = (tmp[j] - 'a' + i) % 26 + 'a';
    }

    if (tmp == T) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}
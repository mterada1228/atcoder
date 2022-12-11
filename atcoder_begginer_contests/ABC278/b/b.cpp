#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, m;
  cin >> h >> m;

  // 同じ時、かつ未来の時刻をチェック
  int ab = h;
  for (int cd = m; cd < 60; ++cd) {
    if (
      0 <= ((ab / 10) * 10) + (cd / 10) &&
      ((ab / 10) * 10) + (cd / 10) <= 23 &&
      0 <= ((ab % 10) * 10 + (cd % 10)) &&
      ((ab % 10) * 10 + (cd % 10)) <= 59
    ) {
      cout << ab << " " << cd << endl;
      return 0;
    }
  }

  // 異なる時、かつ未来の時刻をチェック
  ab = h + 1;
  ab %= 24;

  while (ab != h) {
    for (int cd = 0; cd < 60; ++cd) {
      if (
        0 <= ((ab / 10) * 10) + (cd / 10) &&
        ((ab / 10) * 10) + (cd / 10) <= 23 &&
        0 <= ((ab % 10) * 10 + (cd % 10)) &&
        ((ab % 10) * 10 + (cd % 10)) <= 59
      ) {
        cout << ab << " " << cd << endl;
        return 0;
      }
    }
    ab += 1;
    ab %= 24;
  }

  // 同じ時、かつ過去の時刻をチェック
  ab = h;
  for (int cd = 0; cd < m; ++cd) {
    if (
      0 <= ((ab / 10) * 10) + (cd / 10) &&
      ((ab / 10) * 10) + (cd / 10) <= 23 &&
      0 <= ((ab % 10) * 10 + (cd % 10)) &&
      ((ab % 10) * 10 + (cd % 10)) <= 59
    ) {
      cout << ab << " " << cd << endl;
      return 0;
    }
  }

  return 0;
}
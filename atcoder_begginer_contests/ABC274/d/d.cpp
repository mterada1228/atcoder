#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y;

  cin >> n >> x >> y;

  vector<int> arr_hol;
  vector<int> arr_ver;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;

    if (i % 2 == 0) {
      arr_hol.push_back(a);
    } else {
      arr_ver.push_back(a);
    }
  }

  // 横方向について検証
  // ループ終了時には、n 回目の移動の時に訪れられる座標の候補が保存されている
  set<int> s_x;
  s_x.insert(arr_hol[0]); // 1 回目の横移動は + にしか移動できない

  for (int i = 1; i < arr_hol.size(); ++i) {
    set<int> tmp;
    swap(tmp, s_x); // i - 1 回目に訪れることのできる座標が tmp

    // i 回目に訪れられる座標を s_x として保存
    for (auto e: tmp) {
      s_x.insert(e + arr_hol[i]);
      s_x.insert(e - arr_hol[i]);
    }
  }

  // 縦方向について検証
  // ループ終了時には、n 回目の移動の時に訪れられる座標の候補が保存されている
  set<int> s_y;
  s_y.insert(0);

  for (int i = 0; i < arr_ver.size(); ++i) {
    set<int> tmp;
    swap(tmp, s_y); // i - 1 回目に訪れることのできる座標が tmp

    // i 回目に訪れられる座標を s_y として保存
    for (auto e: tmp) {
      s_y.insert(e + arr_ver[i]);
      s_y.insert(e - arr_ver[i]);
    }
  }

  if (s_x.count(x) == 1 && s_y.count(y) == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
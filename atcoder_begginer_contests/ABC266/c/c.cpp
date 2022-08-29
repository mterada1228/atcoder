#include <bits/stdc++.h>
using namespace std;

int main() {
  double ax, ay, bx, by, cx, cy, dx, dy;
  cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;

  double S_bcd = 0.5 * abs((bx - dx) * (cy - dy) - (cx - dx) * (by - dy));
  double S_abc = 0.5 * abs((ax - cx) * (by - cy) - (bx - cx) * (ay - cy));
  double S_acd = 0.5 * abs((ax - dx) * (cy - dy) - (cx - dx) * (ay - dy));
  double S_abd = 0.5 * abs((ax - dx) * (by - dy) - (bx - dx) * (ay - dy));

  if (S_bcd == S_abc + S_acd + S_abd) {
    cout << "No" << endl;
    return 0;
  }

  if (S_abc == S_bcd + S_acd + S_abd) {
    cout << "No" << endl;
    return 0;
  }

  if (S_acd == S_bcd + S_abc + S_abd) {
    cout << "No" << endl;
    return 0;
  }

  if (S_abd == S_bcd + S_abc + S_acd) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}
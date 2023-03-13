#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<double, double>> ab(n);

  for (int i = 0; i < n; ++i) {
    double a, b;
    cin >> a >> b;

    ab[i] = { a, b };
  }

  // 両端から火をつけた場合、半分の時間で燃え尽きる。その地点が両者が衝突する時間。
  double t = 0;
  for (auto e: ab) {
    t += e.first / e.second;
  }
  t /= 2;

  // t の時間で左端から火がどれだけ進むかが答えとなる。
  double x = 0;
  int id = 0;

  while (t > 0) {
    if (ab[id].first / ab[id].second > t) {
      x = x + ab[id].first;
      t -= ab[id].first / ab[id].second;
    } else {
      x = x + ab[id].second * t;
      t = 0;
    }
  }

  cout << setprecision(10) << x << endl; 

  return 0;
}
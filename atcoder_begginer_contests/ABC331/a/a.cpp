#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, D;
  cin >> M >> D;

  int y, m, d;
  cin >> y >> m >> d;

  int A = ((m - 1) * D + d) % (M * D);

  int m_d = A / D + 1;
  int d_d = A % D + 1;
  int y_d;

  if (((m - 1) * D + d) / (M * D) >= 1) {
    y_d = y + 1;
  } else {
    y_d = y;
  }

  cout << y_d << " " << m_d << " " << d_d << endl;

  return 0;
}
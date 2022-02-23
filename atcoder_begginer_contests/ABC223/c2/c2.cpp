#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
  cin >> N;

  vector<double> a(N), b(N);

  for (int i = 0; i < N; ++i) cin >> a[i] >> b[i];

  double t = 0, ans = 0;

  // 両端から火をつけたときに火が衝突する時間は、
  // 1 / 2 Σ(i=1 -> N) Ai / Bi となる。  
  for (int i = 0; i < N; ++i) t += a[i] / b[i];
  t /= 2;

  for (int i = 0; i < N; ++i) {
    ans += min(a[i], t * b[i]);
    t -= min(a[i] / b[i], t);
  }

  cout << ans << endl;

  return 0;
}

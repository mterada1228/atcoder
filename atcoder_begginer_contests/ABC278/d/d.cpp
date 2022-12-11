#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<int, long long>> V(n + 1);

  for (int i = 1; i <= n; ++i) {
    long long a;
    cin >> a;
    V[i] = { 0, a };
  }

  int q;
  cin >> q;

  pair<int, long long> reset({0, 0});

  for (int i = 0; i < q; ++i) {
    int t;
    cin >> t;

    if (t == 1) {
      long long x;
      cin >> x;

      reset = { i, x };
    }

    if (t == 2) {
      int ind;
      long long v;
      cin >> ind >> v;

      if (V[ind].first < reset.first) {
        V[ind].second = v;
      } else {
        V[ind].second = V[ind].second + v;
      }

      V[ind].first = i;
    }

    if (t == 3) {
      int ind;
      cin >> ind;

      if (V[ind].first < reset.first) {
        cout << reset.second << endl;
      } else {
        cout << reset.second + V[ind].second << endl;
      }
    }
  }

  return 0;
}
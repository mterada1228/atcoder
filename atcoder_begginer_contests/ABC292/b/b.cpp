#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> cards(n + 1);
  for (int i = 0; i < q; ++i) {
    int c, x;
    cin >> c >> x;

    if (c == 1) {
      cards[x] += 1;
    } else if (c == 2) {
      cards[x] += 2;
    } else {
      if (cards[x] >= 2) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }

  return 0;
}
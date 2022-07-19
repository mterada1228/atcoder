#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, r , s, p;
  string t;

  cin >> n >> k >> r >> s >> p >> t;

  vector<char> hands(n);

  int ans = 0;

  for (int i = 0; i < n; ++i) {
    if (t[i] == 'r') {
      if (i < k) {
        ans += p;
        hands[i] = 'p';
      } else {
        if (hands[i - k] == 'p') {
          hands[i] = 'x';
        } else {
          ans += p;
          hands[i] = 'p';
        }
      }
    }

    if (t[i] == 'p') {
      if (i < k) {
        ans += s;
        hands[i] = 's';
      } else {
        if (hands[i - k] == 's') {
          hands[i] = 'x';
        } else {
          ans += s;
          hands[i] = 's';
        }
      }
    }

    if (t[i] == 's') {
      if (i < k) {
        ans += r;
        hands[i] = 'r';
      } else {
        if (hands[i - k] == 'r') {
          hands[i] = 'x';
        } else {
          ans += r;
          hands[i] = 'r';
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  string S;
  bool flip = false;

  cin >> N >> S >> Q;

  S = '0' + S;

  int T, A, B;

  for (int i = 0; i < Q; ++i) {
    cin >> T >> A >> B;

    if (T == 1) {
      char tmp;

      if (flip) {
        if (A <= N) {
          A = N + A;
        } else {
          A = A - N;
        }

        if (B <= N) {
          B = N + B;
        } else {
          B = B - N;
        }
      }

      tmp = S[B];
      S[B] = S[A];
      S[A] = tmp;
    }

    if (T == 2) {
      if (flip) {
        flip = false;
      } else {
        flip = true;
      }
    }
  }

  if (flip) {
    S = S.substr(N, 2 * N) + S.substr(1, N);
  }

  for (int i = 1; i <= 2 * N; ++i) {
    cout << S[i];
  }

  cout << endl;

  return 0;
}
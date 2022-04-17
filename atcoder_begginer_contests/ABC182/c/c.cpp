#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;

  cin >> N;

  string N_str = to_string(N);

  if (N % 3 == 0) {
    cout << 0 << endl;
    return 0;
  } else if (N % 3 == 1) {
    for (int i = 0; i < N_str.length(); ++i) {
      // TODO: filter 関数 を実装
    }
  } 
  return 0;
}
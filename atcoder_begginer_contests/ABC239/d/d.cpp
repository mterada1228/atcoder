#include <bits/stdc++.h>
using namespace std;

vector<int> Eratosthenes(int N) {
  vector<int> isPrime(N+1, 1);

  // 0, 1 は素数ではない
  isPrime[0] = isPrime[1] = 0;

  // エラトステネスの篩
  // 1. 最小の素数を見つける
  // 2. その素数の合成数は素数ではないので 0 を設定する
  // 3. 次の最小の素数を見つける。以降 1~3 の繰り返し
  for (int i = 2; i <= N; ++i) {
    // 1. 最小の素数を見つける -> すでに素数でないとわかっている場合はスキップする
    if (isPrime[i] == 0) continue;

    // 2. その素数の合成数は素数ではないので 0 を設定する
    for (int k = i + i; k <= N; k += i) {
      isPrime[k] = 0;
    }
  }

  return isPrime;
}

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  vector<int> primes = Eratosthenes(200);

  int unusable_x_cnt = 0;

  for (int x = a; x <= b; ++x) {
    for (int y = c; y <= d; ++y) {
      if (primes[x + y] == 1) {
        ++unusable_x_cnt;
        break;
      }
    }
  }

  if (unusable_x_cnt == b - a + 1) {
    cout << "Aoki" << endl;
  } else {
    cout << "Takahashi" << endl;
  }

  return 0;
}
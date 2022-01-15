#include <iostream>
#include <vector>
using namespace std;

int Q;
vector<int> L, R, A(100000, 0), B(100000, 0);

vector<int> Eratosthenes(int N) {
  vector<int> isPrime(N+1, 1);

  // 0, 1 は素数ではない
  isPrime[0] = isPrime[1] = 0;

  // エラストテネスの篩
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
  cin >> Q;

  L.resize(Q);
  R.resize(Q);
  for (int i = 0; i < Q; ++i) cin >> L[i] >> R[i];

  // 1 以上 100000 以下の数字が素数かどうかを表すリストを作成
  vector<int> isPrime = Eratosthenes(100000);

  // N も (N+1)÷2 も素数 を満たす場合は、1 となるリスト A を生成
  for (int i = 1; i <= 100000; ++i) {
    if (isPrime[i] == 1 && isPrime[(i + 1) / 2] == 1) A[i] = 1;
  }

  // [0, i] までの累積和を表すリスト B を生成
  for (int i = 1; i <= 100000; ++i) {
    B[i] = B[i - 1] + A[i];
  }

  // [l, r] の間における、個数を累積和より求めて出力する
  for (int i = 0; i < Q; ++i) {
    cout << B[R[i]] - B[L[i] - 1] << endl;
  }
}


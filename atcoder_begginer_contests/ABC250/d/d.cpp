#include <bits/stdc++.h>
using namespace std;

vector<int> Eratosthenes(int N) {
  vector<int> isPrime(N+1, 1);

  isPrime[0] = isPrime[1] = 0;

  for (int i = 2; i <= N; ++i) {
    if (isPrime[i] == 0) continue;

    for (int k = i + i; k <= N; k += i) {
      isPrime[k] = 0;
    }
  }

  return isPrime;
}

int main() {
  long long n;
  cin >> n;

  // 10^6 までの素数のリストを作成
  vector<long long> primes;
  vector<long long> primes_pow;
  vector<int> isPrime = Eratosthenes(1000000);

  for (long long i = 0; i <= 1000000; ++i) {
    if (isPrime[i]) {
      primes.push_back(i);
      primes_pow.push_back(pow(i, 3));
    }
  }

  long long ans = 0;

  for (int p_i = 0; p_i < primes.size() - 1; ++p_i) {
    int q_i = lower_bound(
                  primes_pow.begin(), 
                  primes_pow.end(),
                  n / primes[p_i]) - primes_pow.begin();
    
    if (primes_pow[q_i] != n / primes[p_i]) {
      q_i--;
    }

    if (p_i < q_i) {
      ans = ans + q_i - p_i;
    }
  }

  cout << ans << endl;

  return 0;
}
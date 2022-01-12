#include <iostream>
using namespace std;

int N, A[101010], B[101010], C[101010];

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < N; ++i) cin >> A[i];
  for (int i = 0; i < N; ++i) cin >> B[i];
  for (int i = 0; i < N; ++i) cin >> C[i];

  sort(A, A+N);
  sort(C, C+N);

  long long count = 0;
  for (int i = 0; i < N; ++i) {
    long long a = lower_bound(A, A+N, B[i]) - A;
    long long c =  N - (upper_bound(C, C+N, B[i]) - C);
    count += a * c;
  }

  cout << count << endl;
  return 0;
}
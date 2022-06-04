#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  set<long long> st;

  cin >> N;

  for (long long a = 2; a <= pow(N, 0.5); ++a) {
    for (long long b = 2; b <= log(N) / log(a); ++b) {
      st.insert(pow(a, b));
    }
  }

  cout << N - st.size() << endl;

  return 0;
}

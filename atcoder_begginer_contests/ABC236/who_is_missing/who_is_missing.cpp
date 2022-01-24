#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> cnt(N+1, 0);

  for (int i = 0; i < 4 * N - 1; ++i) {
    int a;
    cin >> a;

    cnt[a]++;
  }

  for (int j = 1; j <= N; ++j) {
    if (cnt[j] == 3) cout << j << endl;
  }

  return 0;
}

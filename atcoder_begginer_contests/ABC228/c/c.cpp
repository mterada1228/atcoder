#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N, K;

bool cmp(int a, int b) {
  return a > b;
}

int main() {
  cin >> N >> K;

  vector<int> sorted_S(N, 0);
  vector<int> S(N, 0);

  for (int i = 0; i < N; ++i) {
    int a, b, c;
    cin >> a >> b >> c;
    sorted_S[i] = a + b + c;
    S[i] = a + b + c;
  }

  sort(sorted_S.begin(), sorted_S.end(), cmp);

  int rank = sorted_S[K - 1];

  for (int i = 0; i < N; ++i) {
    if (rank <= S[i] + 300) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}
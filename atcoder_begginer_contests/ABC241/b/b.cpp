#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  map<int, int> mp;

  cin >> N >> M;

  for (int i = 0; i < N; ++i) {
    int a;
    cin >> a;
    ++mp[a];
  }

  for (int i = 0; i < M; ++i) {
    int b;
    cin >> b;
    if (mp[b] == 0) {
      cout << "No" << endl;
      return 0;
    }

    --mp[b];
  }

  cout << "Yes" << endl;

  return 0;
}
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  // 連想配列を定義する
  map<int, vector<int>> mp;
  for (int i = 0; i < N; ++i) {
    int a;
    cin >> a;
    mp[a].push_back(i);
  }

  // クエリ
  vector<vector<int>> q(Q, vector<int>(2));
  for (int i = 0; i < Q; ++i) cin >> q[i][0] >> q[i][1];

  // クエリを実行
  for (int i = 0; i < Q; ++i) {
    int x = q[i][0];
    int k = q[i][1];

    if (mp[x].size() < k) {
      cout << -1 << endl;
      continue;
    }

    cout << mp[x][k - 1] + 1 << endl;
  }

  return 0;
}
#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
using namespace std;

int N, K;
vector<int> P;

int main() {
  cin >> N >> K;

  P.resize(N);
  for (int i = 0; i < N; ++i) cin >> P[i];

  priority_queue<
    int,
    vector<int>, // 内部コンテナを指定。デフォルトのまま
    greater<int> // 処理順をカスタマイズ。昇順に並び替える
  > que;

  for (int k = 0; k < K; ++k) que.push(P[k]);

  cout << que.top() << endl;

  for (int k = K; k < N; ++k) {
    if (que.top() < P[k]) {
      que.pop();
      que.push(P[k]);
      cout << que.top() << endl;
    } else {
      cout << que.top() << endl;
    }
  }

  return 0;
}
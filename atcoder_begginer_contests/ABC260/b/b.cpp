#include <bits/stdc++.h>
using namespace std;

bool compare1(vector<int> x, vector<int> y) {
  if (x[1] == y[1]) {
    return x[0] < y[0];
  } else {
    return x[1] > y[1];
  }
}

bool compare2(vector<int> x, vector<int> y) {
  if (x[2] == y[2]) {
    return x[0] < y[0];
  } else {
    return x[2] > y[2];
  }
}

bool compare3(vector<int> x, vector<int> y) {
  if (x[3] == y[3]) {
    return x[0] < y[0];
  } else {
    return x[3] > y[3];
  }
}

int main() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;

  vector<vector<int>> scores(n, vector<int>(4, 0));

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;

    scores[i] = { i + 1, a, 0, 0 };
  }

  for (int i = 0; i < n; ++i) {
    int b;
    cin >> b;

    scores[i][2] = b;
    scores[i][3] = scores[i][1] + b;
  }

  vector<int> ans;

  // 1. 数学の高い順
  sort(scores.begin(), scores.end(), compare1);

  for (int i = 0; i < x; ++i) {
    vector<int> score = *scores.begin();
    ans.push_back(score[0]);
    scores.erase(scores.begin());
  }

  // 2. 英語の高い順
  sort(scores.begin(), scores.end(), compare2);

  for (int i = 0; i < y; ++i) {
    vector<int> score = *scores.begin();
    ans.push_back(score[0]);
    scores.erase(scores.begin());
  }

  // 3. 総合点の高い順
  sort(scores.begin(), scores.end(), compare3);

  for (int i = 0; i < z; ++i) {
    vector<int> score = *scores.begin();
    ans.push_back(score[0]);
    scores.erase(scores.begin());
  }

  sort(ans.begin(), ans.end());

  for (auto e: ans) {
    cout << e << endl;
  }

  return 0;
}
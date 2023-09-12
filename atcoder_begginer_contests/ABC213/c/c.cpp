#include <bits/stdc++.h>
using namespace std;

bool compare_1(vector<int> x, vector<int> y) {
  return x[1] < y[1];
}

bool compare_2(vector<int> x, vector<int> y) {
  return x[2] < y[2];
}

bool compare_3(vector<int> x, vector<int> y) {
  return x[0] < y[0];
}

int main() {
  int h, w, n;
  cin >> h >> w >> n;

  vector<vector<int>> arr;

  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a >> b;
    arr.push_back({ i, a, b });
  }

  sort(arr.begin(), arr.end(), compare_1);

  int cur = arr[0][1];
  int diff = arr[0][1] - 1;

  vector<vector<int>> ans_i;

  for (auto e: arr) {
    if (cur == e[1]) {
      ans_i.push_back({ e[0], e[1] - diff });
    } else {
      diff = diff + e[1] - (cur + 1);
      ans_i.push_back({ e[0], e[1] - diff });

      cur = e[1];
    }
  }

  sort(arr.begin(), arr.end(), compare_2);

  cur = arr[0][2];
  diff = arr[0][2] - 1;

  vector<vector<int>> ans_j;

  for (auto e: arr) {
    if (cur == e[2]) {
      ans_j.push_back({ e[0], e[2] - diff });
    } else {
      diff = diff + e[2] - (cur + 1);
      ans_j.push_back({ e[0], e[2] - diff });

      cur = e[2];
    }
  }

  sort(ans_i.begin(), ans_i.end(), compare_3);
  sort(ans_j.begin(), ans_j.end(), compare_3);

  for (int i = 0; i < n; ++i) {
    cout << ans_i[i][1] << " " << ans_j[i][1] << endl;
  }

  return 0;
}
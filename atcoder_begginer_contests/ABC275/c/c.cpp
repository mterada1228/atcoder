#include <bits/stdc++.h>
using namespace std;

static int cnt;

// 正方形であるかをチェックする
bool check_square(vector<vector<int>> arr) {
  if (arr.size() != 4) return false;

  vector<double> D;

  for (int i = 0; i < 4; ++i) {
    for (int j = i + 1; j < 4; ++j) {
      double d = pow(pow(arr[i][0] - arr[j][0], 2) +
                     pow(arr[i][1] - arr[j][1], 2), 0.5);
      D.push_back(d);
    }
  }

  sort(D.begin(), D.end());

  if (D[0] == D[1] && D[1] == D[2] && D[2] == D[3]) {
    if (D[4] == D[5]) {
      if (pow(D[4], 2) == 2 * pow(D[0], 2)) {
        return true;
      }
    }
  }

  return false;
}

void recursive_comb(vector<vector<int>> selected,
                    vector<vector<int>> arr,
                    int index,
                    int rest) {
  if (rest == 0) {
    if (check_square(selected)) cnt++;
  } else {
    if (index < 0) return;
    recursive_comb(selected, arr, index - 1, rest);
    selected[rest - 1] = arr[index];
    recursive_comb(selected, arr, index - 1, rest - 1);
  }
}

// 配列の組み合わせを再帰関数によって列挙する
void array_foreach_comb(vector<vector<int>> arr,
                        int k) {
  vector<vector<int>> selected(k);
  int index = arr.size() - 1;
  recursive_comb(selected, arr, index, k);
}

int main() {
  vector<vector<int>> arr;

  for (int i = 0; i < 9; ++i) {
    string s;
    cin >> s;
    for (int j = 0; j < 9; ++j) {
      if (s[j] == '#') {
        arr.push_back({ i, j });
      }
    }
  }

  cnt = 0;

  array_foreach_comb(arr, 4);

  cout << cnt << endl;

  return 0;
}

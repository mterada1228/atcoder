#include <bits/stdc++.h>
using namespace std;

const double INF = 1LL << 60;

bool exist(vector<int> array, int num) {
  auto result = find(array.begin(), array.end(), num);
  if (result == array.end()) {
    return false;
  } else {
    return true;
  }
}

template<class T> void chmin(T &a, T b) {
  if (a > b) {
    a = b;
  }
}

template<class T> void chmax(T &a, T b) {
  if (a < b) {
    a = b;
  }
}

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> A(k);

  for (int i = 0; i < k; ++i) {
    cin >> A[i];
  }

  vector<vector<double>> light;
  vector<vector<double>> no_light;

  for (int i = 1; i <= n; ++i) {
    double x, y;
    cin >> x >> y;

    if (exist(A, i)) {
      light.push_back({ x, y });
    } else {
      no_light.push_back({ x, y });
    }
  }

  vector<double> min_length(no_light.size(), INF);

  for(int i = 0; i < no_light.size(); ++i) {
    for (int j = 0; j < light.size(); ++j) {
      double len = pow(pow(light[j][0] - no_light[i][0], 2) + pow(light[j][1] - no_light[i][1], 2), 0.5);
      chmin(min_length[i], len);
    }
  }

  double max_num = 0; 
  for (auto e: min_length) {
    chmax(max_num, e);
  }

  cout << setprecision(20) << max_num << endl;

  return 0;
}
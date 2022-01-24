#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  // map
  map<string, pair<int, string>> mp;
  for (int i = 0; i < N; ++i) {
    string s;
    cin >> s;
    mp[s] = make_pair(i, "No");
  }

  // 急行列車の停車駅を受け取って、停車駅は Yes を設定する
  for (int j = 0; j < M; ++j) {
    string s;
    cin >> s;
    mp[s].second = "Yes";
  }

  // map を元の順番にソートする
  vector<pair<string, pair<int, string>>> arr;
  for (auto &item: mp) {
    arr.emplace_back(item);
  }
  sort(arr.begin(), arr.end(), [] (const auto &x, const auto &y) {return x.second.first < y.second.first;});

  // 答えを出力する
  for (int i = 0; i < N; ++i) {
    cout << arr[i].second.second << endl;
  }

  return 0;
}

#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;

int N;

bool compare(pair<string, int> x, pair<string, int> y) {
  return x.second > y.second;
}

int main() {
  cin >> N;

  map<string, int> mp;

  for (int i = 0; i < N; ++i) {
    string s;
    cin >> s;

    mp[s]++;
  }

  // map はソートできないので、一度 Vector に変換してからソートする
  vector<pair<string, int>> arr;
  for (auto e: mp) {
    arr.emplace_back(e);
  }
  sort(arr.begin(), arr.end(), compare);

  cout << arr[0].first << endl;

  return 0;
}

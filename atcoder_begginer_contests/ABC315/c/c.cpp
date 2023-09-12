#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> x, pair<int, int> y) {
  return x.second > y.second;
}

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> fs;

  for (int i = 0; i < n; ++i) {
    int f, s;
    cin >> f >> s;

    fs.push_back({ f, s });
  }

  sort(fs.begin(), fs.end(), compare);

  pair<int, int> max = fs[0];

  // 候補1
  pair<int, int> second_max = fs[1];
  int cand1 = 0;

  if (max.first != second_max.first) {
    cout << max.second + second_max.second << endl;
    return 0;
  } else {
    cand1 = max.second + second_max.second / 2;
  }

  // 候補2
  int cand2 = 0; 

  for (int i = 2; i < n; ++i) {
    if (fs[i].first == max.first) continue;

    cand2 = max.second + fs[i].second;
    break;
  }

  if (cand1 >= cand2) {
    cout << cand1 << endl;
  } else {
    cout << cand2 << endl;
  }

  return 0;
}
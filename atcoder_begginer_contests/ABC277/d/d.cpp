#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  map<int, int> A;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    ++A[a];
  }

  if (A.size() == m) {
    cout << 0 << endl;
    return 0;
  }

  vector<pair<int, int>> vec;
  for (auto e: A) {
    vec.push_back(e);
  }

  int start_index;
  for (int i = 0; i < vec.size(); ++i) {
    if (vec[(i + 1)%vec.size()].first != (vec[i].first + 1) % m) {
      start_index = i;
      break;
    }
  }

  vector<long long> S(vec.size(), 0);
  
  long long tot = 0;
  for (auto e: vec) {
    tot = tot + e.first * e.second;
  }

  for (int i = start_index; i >= 0; --i) {
    if (vec[(i + 1)%vec.size()].first != (vec[i].first + 1) % m) {
      S[i] = tot - vec[i].first * vec[i].second;
    } else {
      S[i] = S[(i+1)%vec.size()] - vec[i].first * vec[i].second;
    }
  }

  for (int i = vec.size() - 1; i > start_index; --i) {
    if (vec[(i + 1)%vec.size()].first != (vec[i].first + 1) % m) {
      S[i] = tot - vec[i].first * vec[i].second;
    } else {
      S[i] = S[(i+1)%vec.size()] - vec[i].first * vec[i].second;
    }
  }

  long long min = 1000000000000000;
  for (auto e: S) {
    if (e < min) min = e;
  }

  cout << min << endl;

  return 0;
}
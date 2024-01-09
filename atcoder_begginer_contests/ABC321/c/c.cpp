#include <bits/stdc++.h>
using namespace std;

vector<long long> arr;
vector<long long> path;
vector<int> todo;

void DFS(long long i, vector<long long> path) {
  path.push_back(i);

  long long tmp = 0;
  for (int j = 0; j < path.size(); ++j) {
    tmp = tmp + path[j] * pow(10, j);
  }

  arr.push_back(tmp);

  vector<int> nexts;

  for (int j = i + 1; j <= 9; ++j) {
    if (todo[j] == 0) nexts.push_back(j);
  }

  if (nexts.size() == 0) {
    todo[i] = 0;
    return;
  }

  for (auto e: nexts) {
    todo[e] = 1;
    DFS(e, path);
  }

  todo[i] = 0;
}

int main() {
  long long k;
  cin >> k;
  
  todo.resize(10, 0);

  for (long long i = 0; i <= 9; ++i) {
    todo[i] = 1;
    DFS(i, path);
  }

  sort(arr.begin(), arr.end());

  cout << arr[k] << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool compare(char x, char y) {
  return x > y;
}

int g1(int x) {
  string x_str;
  x_str = to_string(x);
  sort(x_str.begin(), x_str.end(), compare);
  return atoi(x_str.c_str());
}

int g2(int x) {
  string x_str;
  x_str = to_string(x);
  sort(x_str.begin(), x_str.end());
  return atoi(x_str.c_str());
}

int f(int x) {
  return g1(x) - g2(x);
}

int main() {
  int N, K;
  vector<int> A;

  cin >> N >> K;

  A.push_back(N);

  for (int i = 1; i <= K; ++i) {
    A.push_back(f(A[i-1]));
  }

  cout << A[K] << endl;

  return 0;
}
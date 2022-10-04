#include <bits/stdc++.h>
using namespace std;

bool exist(vector<int> array, int num) {
  auto result = find(array.begin(), array.end(), num);
  if (result == array.end()) {
    return false;
  } else {
    return true;
  }
}

int main() {
  int n, k, q;
  cin >> n >> k >> q;

  vector<int> arr(k + 1, 0);

  for (int i = 1; i <= k; ++i) {
    int a;
    cin >> a;

    arr[i] = a;
  }

  for (int i = 1; i <= q; ++i) {
    int l;
    cin >> l;

    if (arr[l] == n) {
      continue;
    } else if (exist(arr, arr[l] + 1)) {
      continue;
    } else {
      ++arr[l];
    }
  }

  for (int i = 1; i <= k; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
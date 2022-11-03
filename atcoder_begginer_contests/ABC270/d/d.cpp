#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> arr;

  for (int i = 0; i < k; ++i) {
    int a;
    cin >> a;
    arr.push_back(a);
  }

  int cnt_a = 0;
  int cnt_b = 0;

  bool flg = true;
  while (flg) {
    int half = n / 2;
    int near_harf = lower_bound(arr.begin() + 1, arr.end() - 1, half) - arr.begin();
    if (abs(arr[near_harf] - half) > abs(arr[near_harf - 1] - half)) {
      near_harf = near_harf - 1;
    }

    cout << "half: " << half << endl;
    cout << "near_half: " << arr[near_harf] << endl;

    if (n >= arr[near_harf]) {

      cnt_a += arr[near_harf];
      n -= arr[near_harf];

      if (n >= arr[near_harf]) {

        cnt_b += arr[near_harf];
        n -= arr[near_harf];

      } else {
        int max = lower_bound(arr.begin() + 1, arr.end() - 1, half) - arr.begin() - 1;
        if (max < 0) {
          flg = false;
        } else {
          cnt_b += arr[max];
          n -= arr[max];
        }
      }
    } else {
      flg = false;
    }
  }

  cout << "cnt_a: " << cnt_a << endl;
  cout << "cnt_b: " << cnt_b << endl;

  return 0;
}
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<vector<string>> maps(10, vector<string>(10));
stack<int> todo;
string tmp;
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};
int nx, ny;

int main () {
  for (int i = 0; i < 10; ++i) {
    cin >> tmp;
    for (int k = 0; k < 10; ++k) {
      maps[i][k] = tmp[k];
    }
  }

  // 埋め立て位置を全探索する
  for (int i = 0; i < 10; ++i) {
    for (int k = 0; k < 10; ++k) {
      // 一箇所埋め立てる
      maps[i][k] = "o";
      // DFSを用いて全ての陸地に訪れられるかチェック
      vector<vector<bool>> seen(10, vector<bool>(10, false));
    }
  }

  // デバッグ
  cout << endl;
  cout << "maps ***********" << endl;
  for (int i = 0; i < 10; ++i) {
    for (int k = 0; k < 10; ++k) {
      cout << maps[i][k] << " ";
    }
    cout << endl;
  }
}
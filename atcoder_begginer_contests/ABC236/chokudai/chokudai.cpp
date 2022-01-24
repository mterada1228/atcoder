#include <iostream>
using namespace std;

string s;
int a, b;

int main() {
  cin >> s >> a >> b;
  a--;
  b--;

  char tmp;
  tmp = s[b];
  s[b] = s[a];
  s[a] = tmp;

  cout << s << endl;

  return 0;
}
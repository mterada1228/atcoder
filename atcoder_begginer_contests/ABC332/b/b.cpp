#include <bits/stdc++.h>
using namespace std;

int main() {
  long long k, g, m;
  cin >> k >> g >> m;

  long long g_c = 0;
  long long m_c = 0;

  for (int i = 0; i < k; ++i) {
    if (g_c == g) {
      g_c = 0;
    } else if (m_c == 0) {
      m_c = m;
    } else {
      if (m_c >= g - g_c) {
        m_c = m_c - (g - g_c);
        g_c = g;
      } else {
        g_c = g_c + m_c;
        m_c = 0;
      }
    }
  }

  cout << g_c << " " << m_c << endl;

  return 0;
}
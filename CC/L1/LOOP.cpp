// https://www.codechef.com/problems/LOOP

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int a, b, m;
  cin >> a >> b >> m;
  if (a > b) {
    swap(a, b);
  }
  auto p = b - a;
  auto q = a + (m - b);
  cout << min(p, q) << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}

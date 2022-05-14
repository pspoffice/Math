// https://www.codechef.com/problems/BLITZ3_2

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int n, a, b;
  cin >> n >> a >> b;
  int p = 2 * (180 + n);
  p -= (a + b);
  cout << p << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}

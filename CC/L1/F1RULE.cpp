// https://www.codechef.com/problems/F1RULE

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int x, y;
  cin >> x >> y;
  auto a = double(x) * 1.07;
  if (y <= a) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}

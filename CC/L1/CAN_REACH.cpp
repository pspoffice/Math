// https://www.codechef.com/problems/CAN_REACH

#include <cmath>
#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int a, b, k;
  cin >> a >> b >> k;
  bool c = 0;
  if (a % k == 0 and b % k == 0) {
    c = 1;
  }
  cout << (c ? "YES" : "NO") << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}
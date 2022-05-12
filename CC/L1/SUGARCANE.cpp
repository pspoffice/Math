// https://www.codechef.com/problems/SUGARCANE

#include <cstdint>
#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  uint64_t x;
  cin >> x;
  x *= 50;
  x *= 0.30;
  cout << x << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}

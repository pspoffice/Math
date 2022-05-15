// https://www.codechef.com/problems/PPSUM

#include <cmath>
#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Sum(uint64_t* k) -> void { *k = (*k * (*k + 1)) / 2; }

auto Solve() -> void {
  uint64_t d, k;
  cin >> d >> k;
  while (d--) {
    Sum(&k);
  }
  cout << k << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}

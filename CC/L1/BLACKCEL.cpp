// https://www.codechef.com/problems/BLACKCEL

#include <cmath>
#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int x;
  cin >> x;
  cout << x * (x / 2) << '\n';
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
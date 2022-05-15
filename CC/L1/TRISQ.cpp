// https://www.codechef.com/problems/TRISQ

#include <cmath>
#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int b;
  cin >> b;
  int n = b / 2 - 1;
  cout << (n * (n + 1)) / 2 << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}
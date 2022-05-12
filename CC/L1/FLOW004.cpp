// https://www.codechef.com/problems/FLOW004

#include <cmath>
#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int x;
  cin >> x;
  int s = x % 10;
  int p = floor(log10(x)) + 1;
  p = pow(10, p - 1);
  s += (x / p);
  cout << s << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}
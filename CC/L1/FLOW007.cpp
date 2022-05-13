// https://www.codechef.com/problems/FLOW007

#include <cmath>
#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int x;
  cin >> x;
  int p = 0;
  while (x) {
    int q = x % 10;
    x /= 10;
    p *= 10;
    p += q;
  }
  cout << p << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}
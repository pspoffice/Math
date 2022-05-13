// https://www.codechef.com/problems/PASSORFAIL

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int n, x, p;
  cin >> n >> x >> p;
  const int c = x * 3 - (n - x);
  if (c >= p) {
    cout << "PASS" << '\n';
  } else {
    cout << "FAIL" << '\n';
  }
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}
// https://www.codechef.com/problems/FLOW002

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int a, b;
  cin >> a >> b;
  cout << a % b << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}
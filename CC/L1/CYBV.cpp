// https://www.codechef.com/problems/CYBV

#include <cmath>
#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int a, b;
  cin >> a >> b;
  const int x = b / a;
  cout << x << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}

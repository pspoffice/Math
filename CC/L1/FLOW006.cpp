// https://www.codechef.com/problems/FLOW006

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int x;
  cin >> x;
  int s = 0;
  while (x) {
    s += (x % 10);
    x /= 10;
  }
  cout << s << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}
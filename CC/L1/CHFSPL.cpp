// https://www.codechef.com/problems/CHFSPL

#include <cmath>
#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > c) {
    swap(a, c);
  }
  if (a > b) {
    swap(a, b);
  }
  if (b > c) {
    swap(b, c);
  }
  cout << b + c << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}

// https://www.codechef.com/problems/FLOW017

#include <algorithm>
#include <array>
#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  array<int, 3> a;
  cin >> a[0] >> a[1] >> a[2];
  sort(a.begin(), a.end());
  cout << a[1] << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}
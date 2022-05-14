// https://www.codechef.com/problems/NAICHEF

#include <algorithm>
#include <array>
#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

array<int, 10000> arr;

auto Solve() -> void {
  int n, a, b;
  cin >> n >> a >> b;
  for (int i = 0; i < n; ++i) cin >> arr[i];
  const auto p = count(arr.begin(), arr.begin() + n, a);
  const auto q = count(arr.begin(), arr.begin() + n, b);
  const auto c = (double)p / n;
  const auto d = (double)q / n;
  cout << (c * d) << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}

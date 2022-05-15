// https://www.codechef.com/problems/COMPCAND

#include <iostream>
using namespace std;

auto Solve() -> void {
  int n, k;
  cin >> n >> k;
  if (n % k == 0) {
    cout << n / k << '\n';
  } else
    cout << -1 << '\n';
}

auto main() -> int {
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}

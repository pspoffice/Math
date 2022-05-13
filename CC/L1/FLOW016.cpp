// https://www.codechef.com/problems/FLOW016

#include <iostream>
using namespace std;

#define int int64_t
#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto GCD(int a, int b) -> int {
  if (b == 0) {
    return a;
  } else {
    return GCD(b, a % b);
  }
}

auto LCM(int a, int b) -> int {
  int gcd = GCD(a, b);
  return a / gcd * b;
}

auto Solve() -> void {
  int a, b;
  cin >> a >> b;
  cout << GCD(a, b) << ' ' << LCM(a, b) << '\n';
}

auto main() -> int32_t {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}

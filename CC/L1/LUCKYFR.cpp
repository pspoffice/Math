// https://www.codechef.com/problems/LUCKYFR

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int x;
  cin >> x;
  int answer = 0;
  while (x) {
    answer += (x % 10 == 4 ? 1 : 0);
    x /= 10;
  }
  cout << answer << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}
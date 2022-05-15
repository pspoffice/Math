// https://www.codechef.com/problems/QUEENATTACK

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

uint64_t n, x, y;

auto Count() -> int {
  uint64_t answer = 0;
  answer += n + n - 2;
  answer += min(x - 1, y - 1);
  answer += min(n - x, y - 1);
  answer += min(x - 1, n - y);
  answer += min(n - x, n - y);
  return answer;
}

auto Solve() -> void {
  cin >> n >> x >> y;
  cout << Count() << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}

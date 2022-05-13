// https://www.codechef.com/problems/FLOW013

#include <cmath>
#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int a, b, c;
  cin >> a >> b >> c;
  string answer;
  if (a + b + c == 180) {
    answer = "YES";
  } else {
    answer = "NO";
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
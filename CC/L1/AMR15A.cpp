// https://www.codechef.com/problems/AMR15A

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int n;
  cin >> n;
  int a = 0, b = 0, x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x % 2) {
      b += 1;
    } else {
      a += 1;
    }
  }
  if (a > b) {
    cout << "READY FOR BATTLE" << '\n';
  } else {
    cout << "NOT READY" << '\n';
  }
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
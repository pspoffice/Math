// https://www.codechef.com/problems/FCTRL2

#include <iostream>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int n;
  cin >> n;
  vector<int> vec;
  vec.reserve(512);
  vec.push_back(1);
  for (int x = 2; x <= n; x++) {
    int carry = 0;
    for (int i = 0; i < vec.size(); i++) {
      int value = vec[i] * x + carry;
      vec[i] = value % 10;
      carry = value / 10;
    }
    while (carry != 0) {
      vec.push_back(carry % 10);
      carry /= 10;
    }
  }
  for (auto it = vec.rbegin(); it < vec.rend(); ++it) {
    cout << *it;
  }
  cout << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}
// https://www.codechef.com/LTIME108D/problems/MXMODSUM

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  for (size_t i = 0; i < v.size(); i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int p = v.back();
  auto answer = 0;
  for (size_t i = 0; i < v.size(); i++) {
    answer = max(answer, (v[i] + p) + ((v[i] - p) % m + m) % m);
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

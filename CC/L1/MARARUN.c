// https://www.codechef.com/problems/MARARUN

#include <stdio.h>

void Solve() {
  int a, b, c, d, x, count = 0;
  if (scanf_s("%d %d %d %d %d", &x, &d, &a, &b, &c)) {
    int p = x * d;
    if (p >= 10) count = a;
    if (p >= 21) count = b;
    if (p >= 42) count = c;
    printf("%d\n", count);
  }
}

int main() {
  int t;
  if (scanf_s("%d", &t)) {
    while (t--) Solve();
  }
  return 0;
}

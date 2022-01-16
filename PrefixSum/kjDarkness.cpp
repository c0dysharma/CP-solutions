// Problem-
// https://www.hackerrank.com/contests/ab-yeh-kar-ke-dikhao/challenges/kj-and-street-lights/problem
// Algo- Scanline algo
// dunno why giving segfault on test case 3,4,5 and 15 (somebody help :3)

#include <iostream>
using namespace std;

int main(void) {
  long long Q, P;
  cin >> Q >> P;
  P += 1;
  long long *arr = new long long[P]();

  while (Q--) {
    long long l, r;
    cin >> l >> r;

    // filling array with logic
    if (l == 0 || r == 0) {
      arr[l] += 1;
      arr[max(l, r) + 1] -= 1;
    } else if ((l - r) < 0) {
      arr[0] += 1;
      if ((l + r + 1) < P) {
        arr[l + r + 1] -= 1;
      }
    } else {
      arr[l - r] += 1;
      if ((l + r + 1) < P) {
        arr[l + r + 1] -= 1;
      }
    }
  }
  // prefix sum
  for (long long i = 1; i < P; i++) {
    arr[i] += arr[i - 1];
  }

  // counting continuous non zero sum
  long long ans = 0, curr = 0;
  for (long long i = 0; i < P; i++) {
    if (arr[i] != 1) {
      curr += 1;
      ans = max(curr, ans);
    } else
      curr = 0;
  }
  cout << ans << endl;
}
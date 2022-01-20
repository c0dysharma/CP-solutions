// Problem- https://www.codechef.com/problems/COWA19B
// Algo- PrefixSum

#include <iostream>
using namespace std;

long long *arr = new long long[1000001];
long long *diff = new long long[1000001];
int main(void) {
  int N, Q;
  cin >> N >> Q;

  while (Q--) {
    int L, R;
    cin >> L >> R;
    arr[L] += 1;
    arr[R + 1] -= 1;
    diff[R + 1] -= (R - L + 1);
  }

  // presum 1
  for (int i = 1; i <= N; i++) {
    arr[i] += arr[i - 1];
  }

  // presum 2
  for (int i = 1; i <= N; i++) {
    diff[i] += diff[i - 1] + arr[i];
  }

  // printing output
  int M;
  cin >> M;
  while (M--) {
    int I;
    cin >> I;
    cout << diff[I] << endl;
  }
}
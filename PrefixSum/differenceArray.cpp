/* Update array of size N from index l to r with x
input: N
N space seperated array vals
Q
l r x

ouput: updated space seperated array
*/

// algo- Using scanline algo to do in O(Q*1)

#include <iostream>
using namespace std;

int main(void) {
  int N;
  cin >> N;
  int arr[N], diff[N];

  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }

  diff[0] = arr[0];
  for (int i = 1; i < N; i++) {
    diff[i] = arr[i] - arr[i - 1];
  }

  int Q;
  cin >> Q;
  while (Q--) {
    int l, r, x;
    cin >> l >> r >> x;
    diff[l] += x;
    if (r < N)
      diff[r + 1] -= x;
  }

  cout << diff[0] << ' ';
  for (int i = 1; i < N; i++) {
    diff[i] += diff[i - 1];
    cout << diff[i] << ' ';
  }
  cout << endl;
}
/* Update 0 array of size N from index l to r with x
input: N X
Q
l r

ouput: updated space seperated array
*/

// algo- Using scanline algo to do in O(Q*1)

#include <iostream>
using namespace std;

int main(void) {
  int N, X;
  cin >> N >> X;
  int arr[N];
  for (int i = 0; i < N; i++) {
    arr[i] = 0;
  }

  int Q;
  cin >> Q;
  while (Q--) {
    int l, r;
    cin >> l >> r;
    arr[l] += X;
    if (r < N)
      arr[r + 1] -= X;
  }
  cout << arr[0] << ' ';
  for (int i = 1; i < N; i++) {
    arr[i] += arr[i - 1];
    cout << arr[i] << ' ';
  }
  cout << endl;
}
// Problem- https://www.spoj.com/problems/CSUMQ/
// algo- prefix sum
#include <iostream>
using namespace std;

// the hash
size_t hshSize = 1e5 + 10; // 10^5 + 10
int *arr = new int[hshSize];

int main(void) {
  int N;
  cin >> N;
  cin >> arr[0];
  for (int i = 1; i < N; i++) {
    cin >> arr[i];
    arr[i] += arr[i - 1];
  }

  int Q;
  cin >> Q;
  while (Q--) {
    int i, j;
    cin >> i >> j;
    if (i == 0)
      cout << arr[j] << endl;
    else  
      cout << arr[j]-arr[i-1] << endl; 
  }
  delete[] arr;
}

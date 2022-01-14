// problem- https://www.codechef.com/problems/BLONDIE
// algo- prefix sum
#include <iostream>
using namespace std;

int main(void) {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    int arr[N + 1];
    long long sum = 0;

    arr[0] = 0;

    for (int i = 1; i <= N; i++) {
      int val;
      cin >> val;
      if (val == -1) {
        arr[i] = sum / (i - 1);
        sum += arr[i];
      } else {
        arr[i] = val;
        sum += arr[i];
      }
    }

    for (int i = 1; i <= N; i++) {
      cout << arr[i] << ' ';
    }
    cout << endl;
  }
}

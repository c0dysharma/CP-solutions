// Problem-https://codeforces.com/problemset/problem/363/B
// Algo- Sliding Window

#include <iostream>
using namespace std;

int main(void) {
  // basic i/o
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // sum of first window
  int minIndex = 0;
  int minSum = 0;
  for (int i = 0; i < k; i++) {
    minSum += arr[i];
  }

  int currSum = minSum;
  for (int j = k; j < n; j++) {
    currSum += arr[j];
    currSum -= arr[j - k]; // j-k is element just before new window

    if (currSum <= minSum) {
      minSum = currSum;
      minIndex = j - k + 1; // staring of the new window
    }
  }

  // plus 1 to make it 1 based index
  cout << minIndex + 1 << endl;
}
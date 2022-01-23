// Problem- https://codeforces.com/problemset/problem/1341/B
// Algo- Sliding Window
// WA on test 2 help needed

#include <bits/stdc++.h>
using namespace std;

int main(void) {
  // Fast io
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  long long int t;
  cin >> t;
  while (t--) {
    long long int n, k;
    cin >> n >> k;

    long long arr[n];
    for (long long int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    queue<long long> peaksValue;
    long long int peaks = 0;
    long long int lowerBound = 0;
    for (long long int i = 1; i < k - 1; i++) {
      if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
        peaks++;
        peaksValue.push(arr[i]);
      }
    }

    long long currPeaks = peaks;
    for (long long int j = k - 1; j < n - 1; j++) {
      // add new peak
      if (arr[j] > arr[j - 1] && arr[j] > arr[j + 1]) {
        currPeaks++;
        peaksValue.push(arr[j]);
      }
      // remove last peak
      if (!peaksValue.empty()) {
        if (arr[j + 2 - k] == peaksValue.front()) {
          currPeaks--;
          peaksValue.pop();
        }
      }
      // update max values
      if (currPeaks > peaks) {
        peaks = currPeaks;
        lowerBound = j + 2 - k;
      }
    }

    // peaks+1 is number of pieces door will break
    // question has 1 based indexing
    cout << peaks + 1 << ' ' << lowerBound + 1 << endl;
  }
  return 0;
}
// Problem- https://www.codechef.com/problems/SHIVIGOD
// Algo- Sliding window

#include <climits>
#include <iomanip>
#include <iostream>
using namespace std;

int main(void) {

  int T;
  cin >> T;
  while (T--) {
    int n, a, b;
    cin >> n >> b >> a;
    long long int arr[n];

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    double maxEff = INT_MIN;
    int maxSum = 0;

    for (int k = a; k <= b; k++) {
      double currEff = INT_MIN;
      int currSum = 0;

      for (int i = 0; i < k; i++) {
        currSum += arr[i];
      }
      currEff = (double)currSum / k;
      if (currEff > maxEff) {
        maxEff = currEff;
        maxSum = currSum;
      }

      for (int j = k; j < n; j++) {
        currSum += arr[j];
        currSum -= arr[j - k];
        currEff = (double)currSum / k;

        if (currEff > maxEff) {
          maxEff = currEff;
          maxSum = currSum;
        }
      }
    }

    cout << fixed << setprecision(9) << maxEff << endl;
  }
}
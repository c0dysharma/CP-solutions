#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];

   int q = INT_MIN;
   int p = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      p += arr[i];
      q = max(q,arr[i]);
    }
    p-=q;
    double avgMean = q + (double)p/(n-1);
    cout << fixed << setprecision(10) << avgMean << endl;
  }
}
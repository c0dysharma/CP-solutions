// Problem- https://www.codechef.com/problems/SUMPOWER
// Algo- Sliding Window

#include <iostream>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    long long int totalDiffs = 0; // store sumation of changes in all windo
    long long int currDiffs = 0;  // stores changes in current window

    for (int i = 0; i < k - 1; i++) {
      if (s[i] != s[i + 1])
        currDiffs++;
    }

    for (int j = k - 1; j < n - 1; j++) {
      // compares first element of new window with last of previous's
      if (s[j] != s[j + 1])
        currDiffs++;

      totalDiffs += currDiffs; // no 2 windows are compared

      // subtract last change coz window gonna end in next iteration
      if (s[j + 1 - k] != s[j + 2 - k])
        currDiffs--;
    }

    cout << totalDiffs << endl;
  }
}
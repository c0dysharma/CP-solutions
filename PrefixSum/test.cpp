// Problem- https://www.codechef.com/COW42020/problems/COW3E/
// Algo- Prefix Sum

#include <iostream>
using namespace std;

// Creating global array of max size to get 0 initilazed
#define maxSize 1001
int arr[maxSize][maxSize];

int main(void) {
  int n, m, u, q;
  cin >> n >> m >> u >> q;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> arr[i][j];
    }
  }

  // performing U updates
  while (u--) {
    int k, r1, c1, r2, c2;
    cin >> k >> r1 >> c1 >> r2 >> c2;
    // to make it work with 1 based array
    r1++;
    r2++;
    c1++;
    c2++;

    for (int i = r1; i <= r2; i++) {
      for (int j = c1; j <= c2; j++) {
        arr[i][j] += k;
      }
    }
  }
  cout << "==========================" << endl;
  // print diff
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cout << arr[i][j] << ' ';
    }
    cout << endl;
  }
  cout << "==========================" << endl;

  // doing prefix sum
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      arr[i][j] += arr[i - 1][j] + arr[i][j - 1];
      arr[i][j] -= arr[i - 1][j - 1];
    }
  }
  cout << "==========================" << endl;
  // print diff
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cout << arr[i][j] << ' ';
    }
    cout << endl;
  }
  cout << "==========================" << endl;

  // printing query
  while (q--) {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    // to make it work with 1 based array
    r1++;
    r2++;
    c1++;
    c2++;

    // calculating answer
    int ans =
        arr[r2][c2] - arr[r1 - 1][c2] - arr[r2][c1 - 1] + arr[r1 - 1][c1 - 1];
    cout << ans << endl;
  }
  return 0;
}
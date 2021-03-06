// Problem- https://www.codechef.com/COW42020/problems/COW3E/
// Algo- Prefix Sum

#include <iostream>
using namespace std;

// Creating global array of max size to get 0 initilazed
#define maxSize 1001
long arr[maxSize][maxSize];
long diff[maxSize][maxSize];

int main(void) {
  int n, m, u, q;
  cin >> n >> m >> u >> q;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> arr[i][j];
    }
  }
  // create difference array
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (i == 1)
        diff[i][j] = arr[i][j];
      diff[i][j] = arr[i][j] - arr[i][j - 1];
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
      diff[i][c1] += k;
      if (c2 + 1 <= m) {
        diff[i][c2 + 1] -= k;
      }
    }
  }

  // difference sum for operations
  for (int i = 1; i <= n; i++) {
    for (int j = 2; j <= m; j++) {
      // if(j!=1)
      diff[i][j] += diff[i][j - 1];
    }
  }

  // doing prefix sum
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      diff[i][j] += diff[i - 1][j] + diff[i][j - 1];
      diff[i][j] -= diff[i - 1][j - 1];
    }
  }

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
    long long ans = diff[r2][c2] - diff[r1 - 1][c2] - diff[r2][c1 - 1] +
                    diff[r1 - 1][c1 - 1];
    cout << ans << endl;
  }
  return 0;
}
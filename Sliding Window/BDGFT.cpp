// Problem- https://www.codechef.com/problems/BDGFT
// Algo- Sliding Window

#include <iostream>
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    int beauty = 0;
    int sSize = s.size();
    for (int i = 1; i * i + i <= sSize; i++) {
      int k = i * i + i;
      
      int numOfOne = 0;
      for (int i = 0; i < k; i++) {
        if (s[i] == '1')
          numOfOne++;
      }
      if ((numOfOne * numOfOne) == (k - numOfOne))
        beauty++;

      for (int j = k; j < sSize; j++) {
        if (s[j-k] == '1')
          numOfOne--;

        if (s[j] == '1')
          numOfOne++;

        if ((numOfOne * numOfOne) == (k - numOfOne))
          beauty++;
      }
    }
    cout << beauty << endl;
  }
  return 0;
}
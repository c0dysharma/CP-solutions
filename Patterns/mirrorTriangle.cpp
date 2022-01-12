/*
Mirror the triangular pattern
for N=5
     *
    **
   ***
  ****
 *****
*/

#include <iostream>
using namespace std;

int main(void) {
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    for (int spaces = 0; spaces < N - i; spaces++) {
      cout << ' ';
    }
    for (int j = 0; j <= i; j++) {
      cout << '*';
    }
    cout << endl;
  }
  return 0;
}

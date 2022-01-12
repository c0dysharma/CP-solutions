/*
Print pattern in form of a isocles triangle
for N=4
    1
   121
  12321
 1234321
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
      cout << j + 1;
    }
    for (int k = i; k > 0; k--) {
      cout << k;
    }
    cout << endl;
  }
  return 0;
}
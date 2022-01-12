/*
Print pattern in form of a diamond
for N=7
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <iostream>
using namespace std;

int main(void) {
  int N;
  cin >> N;
  int firstHalf = (N + 1) / 2;
  int secondHalf = N / 2;

  for (int i = 0; i < firstHalf; i++) {
    for (int spaces = 1; spaces < firstHalf - i; spaces++) {
      cout << ' ';
    }
    for (int j = 0; j <= i; j++) {
      cout << '*';
    }
    for (int k = 0; k < i; k++) {
      cout << '*';
    }
    cout << endl;
  }
  for (int i = 0; i < secondHalf; i++) {
    for (int spaces = 0; spaces < i + 1; spaces++) {
      cout << ' ';
    }
    for (int j = secondHalf - i; j > 0; j--) {
      cout << '*';
    }
    for (int k = 1; k < secondHalf - i; k++) {
      cout << '*';
    }
    cout << endl;
  }
  return 0;
}
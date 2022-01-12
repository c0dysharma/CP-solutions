/*
Print num pattern in this form
for N=5
     1
    232
   34543
  4567654
 567898765
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
      cout << i + j + 1;
    }
    for (int k = i + i; k != i; k--) {
      cout << k;
    }
    cout << endl;
  }
  return 0;
}
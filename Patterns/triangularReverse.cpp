/*
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE

*/
#include <iostream>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) {
      cout << (char)('A' + N - i - 1 + j);
    }
    cout << endl;
  }
}
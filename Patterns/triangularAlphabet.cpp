/*
Triangular pattern
print Alphabets in N rows

for N= 2
A
BB

for N = 4
A
BB
CCC
DDDD

*/
#include <iostream>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) {
      cout << (char)('A' + i);
    }
    cout << endl;
  }
}
/*
Square pattern
print Alphabets in N rows

for N= 2
AB
AB

for N = 4
ABCD
ABCD
ABCD
ABCD

*/
#include <iostream>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << (char)('A' + j);
    }
    cout << endl;
  }
}
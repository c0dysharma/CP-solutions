/*
Square pattern
print N stars in N rows

for N= 2
**
**

for N = 4
****
****
****
****

*/
#include <iostream>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << '*';
    }
    cout << endl;
  }
}
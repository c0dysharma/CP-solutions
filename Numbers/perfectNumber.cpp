/*
Print Yes if a number is perfect else no
A perfect number is a number sum of all of its divisor excluding itself is equal
to number itself

For example
N=6
Yes

beacuse 1+2+3 = 6
*/

//Algo- Find all divisors and add them O(N)

#include <iostream>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  int sum = 0;
  for (int i = 1; i < N; i++) {
    int rem = N % i;
    if (rem == 0) // means i is divisor
      sum += i;
  }

  if (sum == N)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
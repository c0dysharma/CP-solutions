/*
For an int N check if it is Armstrong number or not;
Armstrong number is that whose cube of every digit is number itself

For N=153
Yes

because 1*1*1 + 5*5*5 + 3*3*3 = 153
*/

// Algo- find and compare cube of every digit

#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  int num = N;
  int sum = 0;
  while (num != 0) {
    sum += pow(num % 10, 3);
    num = num / 10;
  }

  if (N == sum)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

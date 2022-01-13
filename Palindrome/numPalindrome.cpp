/*
Check if num is palindrome or not
for N=1331
Palindrome

for N=123
Not Palindrome
*/

/*
Algo: Reverse the number and check if its same as original
*/
#include <iostream>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  int digit, rev = 0;
  int num = N;

  while (num != 0) {
    digit = num % 10;
    rev = (rev * 10) + digit;
    num = num / 10;
  }

  if (N == rev)
    cout << "Palindrome" << endl;
  else
    cout << "Not Palindrome" << endl;
}
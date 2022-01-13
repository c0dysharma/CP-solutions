/*
Check if string is palindrome or not
for N=ABBA
Palindrome

for N=ABCC
Not Palindrome
*/

/*
Algo: Reverse the string and check if its same as original
*/
#include <algorithm>
#include <iostream>
using namespace std;

int main(void) {
  string S;
  cin >> S;

  string rev = S;
  reverse(S.begin(), S.end());

  if (rev == S)
    cout << "Palindrome" << endl;
  else
    cout << "Not Palindrome" << endl;
}
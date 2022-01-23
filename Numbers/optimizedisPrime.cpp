
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  int count = 0;
  // if i is a factor of n then (n/i) is also a foctor
  // see i*(n/i) = i
  // so we need to go only till sqrt(n) other half is (n/i)
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      count++;
      // 2*2 and 2*2 reversed is same so only 1 factor
      if (i != (n / i))
        count++;
    }
  }
  // Prime numbers have only 2 factors 1 and itself
  if (count == 2)
    return true;
  return false;
}

// Driver Program to test above function
int main() {
  isPrime(97) ? cout << " true\n" : cout << " false\n";
  isPrime(10) ? cout << " true\n" : cout << " false\n";
  return 0;
}

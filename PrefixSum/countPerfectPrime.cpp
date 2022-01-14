// problem-https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1474
// algo- prefixSum

#include <iostream>
using namespace std;

const size_t hshSize = 1e6 + 1;
pair<bool, int> *arr = new pair<bool, int>[hshSize];

bool isPrime(int n) {
  // Corner cases
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;

  // This is checked so that we can skip
  // middle five numbers in below loop
  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (int i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;

  return true;
}

int main(void) {
  int T;
  cin >> T;

  for (int i = 2; i < hshSize; i++) {
    // check if number itself is prime or not
    arr[i].first = isPrime(i);
    // look for sum of digit as prime only if itself is prime
    if (arr[i].first) {
      // find sum of digit to check if its perfect prime
      int sum = 0;
      int num = i;
      while (num != 0) {
        sum += num % 10;
        num /= 10;
      }

      // only check if sum of digit is >=2
      if (sum >= 2) {
        // increase prefixsum count only if sum is itself prime
        if (isPrime(sum)) {
          arr[i].second = arr[i - 1].second + 1;
        } else
          arr[i].second = arr[i - 1].second;
      }
    } else // if the number itself is not prime
      arr[i].second = arr[i - 1].second;
  }

  while (T--) {
    int a, b;
    cin >> a >> b;

    // Perfect prime between a and b
    cout << arr[b].second - arr[a].second << endl;
  }
}
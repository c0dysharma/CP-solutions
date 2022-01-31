#include <iostream>
using namespace std;

int countPrime(int n) {
  bool arr[n + 1];
  if (n <= 1)
    return false;
  arr[0] = false;
  arr[1] = false;

  for (int i = 2; i <= n; i++) {
    arr[i] = true;
  }
  for (int i = 2; i * i <= n; i++) {
    if (arr[i] == false)
      continue;
    for (int j = i; j * i <= n; j++) {
      arr[i * j] = false;
    }
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == true)
      count++;
  }
  return count;
}

int main(void) {
  int n;
  cin >> n;
  cout << countPrime(n) << endl;
}
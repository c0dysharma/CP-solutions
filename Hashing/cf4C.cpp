// Problem- https://codeforces.com/problemset/problem/4/C
#include <iostream>
#include <unordered_map>
using namespace std;

int main(void) {
  int N;
  cin >> N;
  unordered_map<string, int> map;
  while (N--) {
    string S;
    cin >> S;

    map[S]++;
    if (map[S] > 1)
      cout << S << map[S]-1 << endl;
    else
      cout << "OK" << endl;
  }
}
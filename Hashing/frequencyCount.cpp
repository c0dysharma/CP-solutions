// Problem-
// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/maximum-occurrence-9/
// Algo- create a hashmap for every char

#include <iostream>
#include <unordered_map>
using namespace std;

int main(void) {
  string S;
  getline(cin, S);

  unordered_map<char, int> map;
  char mostFreqChar;
  int mostFreqCount = 0;

  for (char a : S) {
    map[a]++;
  }
  for (pair<char, int> a : map) {
    if (a.second > mostFreqCount) {
      mostFreqCount = a.second;
      mostFreqChar = a.first;
    } else if (a.second == mostFreqCount) {
      mostFreqChar = min((int)a.first, (int)mostFreqChar);
      mostFreqCount = map[mostFreqChar];
    }
  }

  cout << mostFreqChar << ' ' << mostFreqCount << endl;
  return 0;
}
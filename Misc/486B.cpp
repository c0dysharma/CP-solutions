// Problem-https://codeforces.com/problemset/problem/486/B
// Algo- from editorial

#include <iostream>
using namespace std;

int main(void) {
  int M, N;
  cin >> M >> N;

  int matrixB[M][N];
  int matrixA[M][N];
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cin >> matrixB[i][j];
      matrixA[i][j] = 1;
    }
  }
  // make row column 0 if Bij = 0
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      if (matrixB[i][j] == 0) {
        for (int x = 0; x < M; x++) {
          matrixA[x][j] = 0;
        }
        for (int y = 0; y < N; y++) {
          matrixA[i][y] = 0;
        }
      }
    }
  }

  // getting matrix B from A
  int newB[M][N];
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      newB[i][j] = matrixA[i][j];
      for (int x = 0; x < M; x++) {
        newB[i][j] = newB[i][j] || matrixA[x][j];
      }
      for (int y = 0; y < N; y++) {
        newB[i][j] = newB[i][j] || matrixA[i][y];
      }
    }
  }

  // check if both are equal
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      if (matrixB[i][j] == newB[i][j])
        continue;
      else {
        cout << "NO" << endl;
        exit(0);
      }
    }
  }

  // print newB if equal
  cout << "YES" << endl;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cout << matrixA[i][j] << ' ';
    }
    cout << endl;
  }

  return 0;
}
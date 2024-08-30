#include <iostream>
using namespace std;

int main() {
  int m[3][3], k;

  cout << "Insira os elementos da matris 3X3\n";

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> m[i][j];
    }
  }

  cout << "Insira um valor para multiplicar os elementos da matriz\n";
  cin >> k;

  cout << "Matriz original:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << m[i][j] << "\t";
    }
    cout << "\n";
  }

  cout << "Matriz multiplicada por " << k << ":\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << m[i][j] * k << "\t";
    }
    cout << "\n";
  }
}
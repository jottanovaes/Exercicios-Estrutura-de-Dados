#include <iostream>
using namespace std;

int main() {
  int a_row, a_column;
  int b_row, b_column;

  // Verifica ordem das matrizes
  cout << "Digite o numero de linhas da matriz A: " << endl;
  cin >> a_row;
  cout << "Digite o numero de colunas da matriz A: " << endl;
  cin >> a_column;

  cout << "Digite o numero de linhas da matriz B: " << endl;
  cin >> b_row;
  cout << "Digite o numero de colunas da matriz B: " << endl;
  cin >> b_column;

  if (a_column != b_row || a_row != a_column || b_row != b_column) {
    cout << "As matrizes nao são quadradas ou nao são multiplicaveis entre si, logo uma não pode ser a inversa da outra" << endl;
    return 0;
  }

  // Matriz inversa é quando o produto resulta na identidade
  int A[a_row][a_column], B[b_row][b_column];

  for (int i = 0; i < a_row; i++) {
    for (int j = 0; j < a_column; j++) {
      cout << "Informe o valor de A[" << i << "][" << j << "]: " << endl;
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < b_row; i++) {
    for (int j = 0; j < b_column; j++) {
      cout << "Informe o valor de B[" << i << "][" << j << "]: " << endl;
      cin >> B[i][j];
    }
  }

  // Para calcular o produto
  int C[a_row][b_column];
  bool identidade = true;

  for (int i = 0; i < a_row; i++) {
    for (int j = 0; j < b_column; j++) {
      C[i][j] = 0;
      for (int k = 0; k < a_column; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }

      if (i == j && C[i][j] != 1) {  // Verifica a diagonal principal
        identidade = false;
      } else if (i != j && C[i][j] != 0) {  // Verifica fora da diagonal
        identidade = false;
      }
    }
  }

  if (identidade) {
    cout << "A é a matriz inversa de B" << endl;
  } else {
    cout << "A não é a matriz inversa de B" << endl;
  }

  return 0;
}

#include <iostream>
using namespace std;

int main()
{
  int a_row, a_column;

  cout << "Considerando uma matriz A bidimensional, informe as dimensões de A:\n";
  cin >> a_row >> a_column;

  int A[a_row][a_column];

  for (int i = 0; i < a_row; i++)
  {
    for (int j = 0; j < a_column; j++)
    {
      cout << "Informe o valor de A[" << i << "][" << j << "]: ";
      cin >> A[i][j];
    }
  }

  int b_row, b_column;

  cout << "Considerando uma matriz B bidimensional, informe as dimensões de B:\n";
  cin >> b_row >> b_column;

  int B[b_row][b_column];

  for (int i = 0; i < b_row; i++)
  {
    for (int j = 0; j < b_column; j++)
    {
      cout << "Informe o valor de B[" << i << "][" << j << "]: ";
      cin >> B[i][j];
    }
  }

  // Para multiplicação de matrizes a quantidade de colunas de A deve ser igual a quantidade de linhas de B
  if (a_column != b_row)
  {
    cout << "Não é possível realizar a multiplicação das matrizes A e B";
    return 0;
  }
  else
  {
    int C[a_row][b_column];

    for (int i = 0; i < a_row; i++)
    {
      for (int j = 0; j < b_column; j++)
      {
        C[i][j] = 0;
        for (int k = 0; k < a_column; k++)
        {
          C[i][j] += A[i][k] * B[k][j];
        }
      }
    }

    // Matriz A
    cout << "Matriz A:\n";
    for (int i = 0; i < a_row; i++)
    {
      for (int j = 0; j < a_column; j++)
      {
        cout << A[i][j] << "\t";
      }
      cout << "\n";
    }

    // Matriz B
    cout << "Matriz B:\n";
    for (int i = 0; i < b_row; i++)
    {
      for (int j = 0; j < b_column; j++)
      {
        cout << B[i][j] << "\t";
      }
      cout << "\n";
    }

    cout << "Matriz resultante:\n";
    for (int i = 0; i < a_row; i++)
    {
      for (int j = 0; j < b_column; j++)
      {
        cout << C[i][j] << "\t";
      }
      cout << "\n";
    }
  }
}
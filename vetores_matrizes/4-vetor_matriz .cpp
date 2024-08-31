#include <iostream>
using namespace std;

int main()
{
  int a_order;

  cout << "Informe a ordem de uma matriz A quadrada:" << endl;
  cin >> a_order;

  int A[a_order][a_order];

  for (int i = 0; i < a_order; i++)
  {
    for (int j = 0; j < a_order; j++)
    {
      cout << "Informe o valor da posição [" << i << "][" << j << "]: " << endl;
      cin >> A[i][j];
    }
  }

  // Para uma matriz transposta é necessário trocar as linhas pelas colunas
  int AT[a_order][a_order];

  for (int i = 0; i < a_order; i++)
  {
    for (int j = 0; j < a_order; j++)
    {
      AT[j][i] = A[i][j];
    }
  }

  cout << "Matriz transposta:" << endl;

  for (int i = 0; i < a_order; i++)
  {
    for (int j = 0; j < a_order; j++)
    {
      cout << AT[i][j] << " ";
    }
    cout << endl;
  }
}
#include <iostream>
using namespace std;

int main()
{
  int M[3][3], soma = 0, maior_linha = 0;

  cout << "Informe os valores para a matriz M[3][3]:\n";
  for (int i = 0; i < 3; i++)
  {
    int soma_temp = 0;
    for (int j = 0; j < 3; j++)
    {
      cout << "M[" << i << "][" << j << "]: ";
      cin >> M[i][j];
      soma_temp += M[i][j];
    }
    if (i == 0)
    {
      soma = soma_temp;
    }
    else if (soma_temp > soma)
    {
      soma = soma_temp;
      maior_linha = i;
    }
  }

  cout << "Matriz M[3][3]:\n";
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << M[i][j] << "\t";
    }
    cout << endl;
  }

  cout << "Linha com a maior soma de elementos: " << maior_linha << endl;
  cout << "Soma dos elementos da linha " << maior_linha << ": " << soma << endl;
}
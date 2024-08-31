#include <iostream>
using namespace std;

int main()
{
  double M[6][3];
  int linha_maior = 0, coluna_maior = 0, linha_menor = 0, coluna_menor = 0;

  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> M[i][j];

      if (M[i][j] > M[linha_maior][coluna_maior])
      {
        linha_maior = i;
        coluna_maior = j;
      }
      if (M[i][j] < M[linha_menor][coluna_menor])
      {
        linha_menor = i;
        coluna_menor = j;
      }
    }
  }

  cout << "Maior elemento: " << M[linha_maior][coluna_maior] << " M[" << linha_maior << "][" << coluna_maior << "]" << endl;
  cout << "Menor elemento: " << M[linha_menor][coluna_menor] << " M[" << linha_menor << "][" << coluna_menor << "]" << endl;
}
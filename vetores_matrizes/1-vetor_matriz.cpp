#include <iostream>
using namespace std;

int main()
{
  int a[2][2], b[2][2], c[2][2];

  cout << "Insira os elementos da matris A2X2\n";

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> a[i][j];
    }
  }

  cout << "Insira os elementos da matris B2X2\n";

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> b[i][j];
      c[i][j] = a[i][j] + b[i][j];
    }
  }

  cout << "Matriz Soma:\n";
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << c[i][j] << "\t";
    }
    cout << "\n";
  }
}
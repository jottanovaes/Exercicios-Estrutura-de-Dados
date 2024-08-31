#include <iostream>
using namespace std;

// Retorna true se é possível ganhar em alguma linha com o próximo movimento e atualiza linha e coluna
bool linha_ganhadora(char M[3][3], char jogador, int &linha, int &coluna)
{
  for (int i = 0; i < 3; i++)
  {
    int contador = 0;
    int vazias = 0;
    int coluna_vazia = -1;

    for (int j = 0; j < 3; j++)
    {
      if (M[i][j] == jogador)
      {
        contador++;
      }
      else if (M[i][j] == '-')
      {
        vazias++;
        coluna_vazia = j;
      }
    }

    if (contador == 2 && vazias == 1)
    {
      linha = i;
      coluna = coluna_vazia;
      return true;
    }
  }
  return false;
}

bool coluna_ganhadora(char M[3][3], char jogador, int &linha, int &coluna)
{
  for (int j = 0; j < 3; j++)
  {
    int contador = 0;
    int vazias = 0;
    int linha_vazia = -1;

    for (int i = 0; i < 3; i++)
    {
      if (M[i][j] == jogador)
      {
        contador++;
      }
      else if (M[i][j] == '-')
      {
        vazias++;
        linha_vazia = i;
      }
    }

    if (contador == 2 && vazias == 1)
    {
      linha = linha_vazia;
      coluna = j;
      return true;
    }
  }
  return false;
}

bool diagonal_ganhadora(char M[3][3], char jogador, int &linha, int &coluna)
{
  // Diagonal principal
  int contador = 0;
  int vazias = 0;
  int diagonal_vazia = -1;
  for (int i = 0; i < 3; i++)
  {
    if (M[i][i] == jogador)
    {
      contador++;
    }
    else if (M[i][i] == '-')
    {
      vazias++;
      diagonal_vazia = i;
    }
  }
  if (contador == 2 && vazias == 1)
  {
    linha = coluna = diagonal_vazia;
    return true;
  }

  // Diagonal secundária
  contador = vazias = 0;
  diagonal_vazia = -1;
  for (int i = 0; i < 3; i++)
  {
    if (M[i][2 - i] == jogador)
    {
      contador++;
    }
    else if (M[i][2 - i] == '-')
    {
      vazias++;
      diagonal_vazia = i;
    }
  }
  if (contador == 2 && vazias == 1)
  {
    linha = diagonal_vazia;
    coluna = 2 - diagonal_vazia;
    return true;
  }

  return false;
}

int main()
{
  char M[3][3];

  // Lê todas as jogadas
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "Digite o valor para M[" << i << "][" << j << "]: " << endl;
      cin >> M[i][j];
    }
  }

  // Exibe o tabuleiro
  cout << "Tabuleiro atual:" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << M[i][j] << "\t";
    }
    cout << endl;
  }

  char jogador;
  cout << "Informe o jogador atual (X ou O): " << endl;
  cin >> jogador;

  int linha, coluna;

  if (linha_ganhadora(M, jogador, linha, coluna) || coluna_ganhadora(M, jogador, linha, coluna) || diagonal_ganhadora(M, jogador, linha, coluna))
  {
    cout << "A jogada vencedora está na linha " << linha << ", coluna " << coluna << endl;
  }
  else
  {
    cout << "Nenhuma jogada vencedora encontrada." << endl;
  }

  // Falta fazer a lógica para evitar derrota...

  return 0;
}

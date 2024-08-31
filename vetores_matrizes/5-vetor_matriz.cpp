#include <iostream>
using namespace std;

int QTD_CORREDORES = 6;
int QTD_VOLTA = 10;

int main()
{
  struct corredor
  {
    char nome[20];
    int voltas[10];
  };

  corredor kart_result[QTD_CORREDORES];
  int menor_volta = 0, index_volta = 0, index_campeao = 0, resultado_campeao = 0, volta_mais_rapida = 0, media_volta_rapida = 0, corredor_melhor_volta = 0;

  for (int i = 0; i < QTD_CORREDORES; i++)
  {
    cout << "Digite o nome do corredor " << i + 1 << ": " << endl;
    cin >> kart_result[i].nome;

    int media_temp = 0, soma_temp = 0;

    for (int j = 0; j < QTD_VOLTA; j++)
    {
      cout << "Digite o tempo da volta " << j + 1 << ": " << endl;
      cin >> kart_result[i].voltas[j];
      soma_temp += kart_result[i].voltas[j];

      if (i == 0 && j == 0)
      {
        menor_volta = kart_result[i].voltas[j];
      }
      else if (kart_result[i].voltas[j] < menor_volta)
      {
        menor_volta = kart_result[i].voltas[j];
        index_volta = j;
        corredor_melhor_volta = i;
      }
    }

    media_temp = soma_temp / QTD_VOLTA;
    if (i == 0)
    {
      volta_mais_rapida = media_temp;
    }
    else if (media_temp < volta_mais_rapida)
    {
      media_volta_rapida = media_temp;
      volta_mais_rapida = i;
    }
  }

  for (int i = 0; i < QTD_CORREDORES; i++)
  {
    int soma_temp = 0;
    for (int j = 0; j < QTD_VOLTA; j++)
    {
      soma_temp += kart_result[i].voltas[j];
    }
    if (i == 0)
    {
      resultado_campeao = soma_temp;
    }
    else if (soma_temp < resultado_campeao)
    {
      resultado_campeao = soma_temp;
      index_campeao = i;
    }
  }
  cout << "Volta de número " << index_volta + 1 << " foi a melhor!\n Realizado em " << menor_volta << " segundos. Feita pelo corredor " << kart_result[corredor_melhor_volta].nome << endl;
  cout << "O vencedor foi " << kart_result[index_campeao].nome << endl;
  cout << "A volta com média mais rápida foi a volta " << volta_mais_rapida + 1 << " com uma média de " << media_volta_rapida << " segundos." << endl;
}
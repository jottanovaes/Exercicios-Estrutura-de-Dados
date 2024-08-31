#include <iostream>
using namespace std;

int main()
{
    // M[turma][alunos][notas+media]
    double M[2][3][3]; // 2 notas e 1 média
    double MEDIA[2][3]; // Média de cada aluno
    double TURMA[2] = {0}; // Média de cada turma
    int num_notas = 2; // Número de notas por aluno

    // Lê as notas dos alunos
    for (int i = 0; i < 2; i++)
    {
        double soma_nota_turma = 0;

        for (int j = 0; j < 3; j++)
        {
            double soma_nota_aluno = 0;

            // Lê notas de cada aluno
            for (int k = 0; k < num_notas; k++)
            {
                cout << "Digite a nota " << k + 1 << " do aluno " << j + 1 << " da turma " << i + 1 << ":\n";
                cin >> M[i][j][k];
                soma_nota_aluno += M[i][j][k];
            }

            // Calcula a média do aluno e armazena
            MEDIA[i][j] = soma_nota_aluno / num_notas;
            M[i][j][2] = MEDIA[i][j]; // Armazena a média na matriz M
            soma_nota_turma += MEDIA[i][j];
        }

        // Calcula a média da turma
        TURMA[i] = soma_nota_turma / 3;
    }

    // Exibe as médias dos alunos
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Média do aluno " << j + 1 << " da turma " << i + 1 << ": " << MEDIA[i][j] << endl;
        }
    }

    // Exibe as médias das turmas
    for (int i = 0; i < 2; i++)
    {
        cout << "Média da turma " << i + 1 << ": " << TURMA[i] << endl;
    }

    // Encontrar e exibir a turma com a maior média
    int max_media_turma_indice = 0;
    double max_media_turma = TURMA[0];

    for (int i = 1; i < 2; i++)
    {
        if (TURMA[i] > max_media_turma)
        {
            max_media_turma = TURMA[i];
            max_media_turma_indice = i;
        }
    }

    cout << "A turma " << max_media_turma_indice + 1 << " teve a maior média: " << max_media_turma << endl;

    // Verificar quais alunos tiveram média maior que a média de sua turma
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (MEDIA[i][j] > TURMA[i])
            {
                cout << "O aluno " << j + 1 << " da turma " << i + 1 << " teve uma média maior que a média da turma." << endl;
            }
        }
    }

    return 0;
}

/*
------------------------------------------------------------
Disciplina: Introdução à Programação
Livro: "Fundamentos da Programação de Computadores"
Autora: Ana Fernandes Gomes Ascencio

Descrição do problema:
------------------------------------------------------------
Em um campeonato de futebol existem cinco times e cada um
possui onze jogadores. Faça um programa que receba a idade,
o peso e a altura de cada um dos jogadores, calcule e mostre:

  • A quantidade de jogadores com idade inferior a 18 anos;
  • A média das idades dos jogadores de cada time;
  • A média das alturas de todos os jogadores do campeonato;
  • A porcentagem de jogadores com mais de 80 kg entre todos
    os jogadores do campeonato.
------------------------------------------------------------
*/

#include <stdio.h>
#define number_of_teams 2
#define number_of_players 2

int main()
{

    int age, count_minor = 0, count_over_eighty = 0;
    float height, weight;

    float average_age = 0;
    float overall_average_age = 0;
    float overall_average_height = 0;

    int total_of_players = number_of_players * number_of_teams;

    for (int i = 1; i <= number_of_teams; i++)
    {
        printf("----- Time %d -----\n\n", i);
        for (int j = 1; j <= number_of_players; j++)
        {
            printf("Jogador %d:\n", j);
            printf("Idade (anos): ");
            scanf("%d", &age);
            printf("Peso (kg): ");
            scanf("%f", &weight);
            printf("Altura (m): ");
            scanf("%f", &height);
            printf("\n");

            if (age < 18)
            {
                count_minor++;
            }

            if (weight > 80)
            {
                count_over_eighty++;
            }

            average_age += age;
        }

        average_age /= number_of_players;

        printf("Estatísticas do Time %d:\n", i);
        printf("- Média de idade: %.0f anos.\n\n", average_age);

        average_age = 0;
    }

    printf("Estatísticas Gerais do Campeonato:\n");
    printf("- Quantidade de menores de idade: %d pessoas.\n", count_minor);
    printf("- Porcentagem de %.2f%% de jogadores com mais de 80kg.", (float)((count_over_eighty * 100) / total_of_players));

    return 0;
}

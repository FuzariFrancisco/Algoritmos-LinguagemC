#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct
{
    char nome[50];
    char disciplina[30];
    float notaA;
    float notaB;
    float media;
}fichaaluno;

int main()
{
    fichaaluno cadastro,gravaDisciplina[4];
    int i,enter;
    i = 0;
    setlocale(LC_ALL, "portuguese");

    printf("Digite o nome do aluno: "); scanf(" %[^\n]s", cadastro.nome);
    for(i=0; i<=3; i++)
    {
        printf("Digite o nome da %dº disciplina: ",i+1); scanf(" %[^\n]s", cadastro.disciplina);
        printf("Digite a 1º nota da disciplina: "); scanf("%f", &cadastro.notaA);
        printf("Digite a 2º nota da disciplina: "); scanf("%f", &cadastro.notaB);
        cadastro.media = (cadastro.notaA + cadastro.notaB) / 2;
        gravaDisciplina[i] = cadastro;

        while(enter != 13)
            {
               printf("PRESSIONE ENTER PARA CONTINUAR"); enter = getch();
            }
               system("cls");
               enter = 0;
    }

    printf("----------DADOS DO ALUNO----------\n\n");
    printf("Nome do aluno: %s\n",gravaDisciplina[1].nome);
    for(i=0; i<=3; i++)
    {
        printf("\n\nDisciplina: %s\n",gravaDisciplina[i].disciplina);
        printf("1º Nota: %2.2f\n", gravaDisciplina[i].notaA);
        printf("2º Nota: %2.2f\n", gravaDisciplina[i].notaB);
        printf("Média: %2.2f\n", gravaDisciplina[i].media);
        if(gravaDisciplina[i].media >= 6)
        {
            printf("--APROVADO--");
        }
        else
        {
            printf("--REPROVADO--");
        }
    }


    return 0;
}

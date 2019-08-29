/*
EM UM CAPEONATO DE FUTEBOL, EXISTE CINCO TIMES, E CADA TIME POSSUI ONZE JOGADORES. FAÇA UM PROGRAMA QUE RECEBA A IDADE
, O PESO E A ALTURA DE CADA UM DOS JOGADORES. CALCULE E MOSTRE:
- A QUANTIDADE DE JOGADORES COM IDADE INFERIOR A 18 ANOS
- A MÉDIA DAS IDADES DOS JOGADORES DE CADA TIME
- A MÉDIA DAS ALTURAS DE TODOS OS JOGADORES DO DO CAMPEONATO
- A PORCENTAGEM DOS JOGADORES COM MAIS DE 80 QUILOS ENTRE TODOS OS JOGADORES DO CAMPEONATO
*///PROGRAMADO POR FRANCISCO HENRIQUE (francisco_francisco123@outlook.com

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int idade[2][5], i=0, j=0, idade_inf_18=0;
    float peso[2][5], altura[2][5], media_altura, div_peso, porcent, media_idade[2]={0};
    setlocale(LC_ALL, "portuguese");
    //Faz dois repetidores para utilizar as matrizes
    for(i=0; i<2; i++)
    {
     for(j=0; j<5; j++)
     {
         //Pede as informações dos jogadores e coloca na determinada posição
         printf("Digite a idade do %dº jogador do %dº time: ", j+1, i+1); scanf("%d", &idade[i][j]);
         printf("\nDigite a peso do %dº jogador do %dº time: ", j+1, i+1); scanf("%f", &peso[i][j]);
         printf("\nDigite a altura do %dº jogador do %dº time: ", j+1, i+1); scanf("%f", &altura[i][j]);
         system("cls");
         //faz as comparações e somas e atribui nas variáveis de resultado
         if(idade[i][j] < 18){idade_inf_18++;}
         if(peso[i][j] > 80){div_peso++;}
         media_idade[i] += idade[i][j];
         media_altura += altura[i][j];
     }
    }
    for(i=0; i<2; i++)
    {
        media_idade[i] = media_idade[i] / 5;
    }
    media_altura = media_altura / 10;
    if(div_peso == 0){porcent = 0;} else {porcent = (div_peso/10) * 100;}

    printf("Quantidade de jogadores com idade inferior a 18 anos: %d", idade_inf_18);
    printf("\nMédia de idade dos jogadores de cada time:");
    printf("\nTime 1: %.2f", media_idade[0]);
    printf("\nTime 2: %.2f", media_idade[1]);
    printf("\nAltura média dos jogadores do campeonato: %.2f", media_altura);
    printf("\nPorcentagem de jogadores com mais de 80kg entre todos os jogadores: %.2f", porcent);




    return 0;
}

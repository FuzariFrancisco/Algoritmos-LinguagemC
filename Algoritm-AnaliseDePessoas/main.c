/*
FAÇA UM PROGRAMA QUE RECEBA A IDADE, O PESO, A ALTURA, A COR DOS OLHOS,(AZUL, PRETO, VERDE E CASTANHO),
A COR DO CABELO(PRETO, CASTANHO, LOIRO E RUIVO), E NÚMERO DE PESSOAS, CALCULE E MOSTRE:
- A QUANTIDADE DE PESSOAS COM IDADE SUPERIOR A 50 E PESO INFERIOR A 60
- A MÉDIA DAS IDADES DAS PESSOAS COM A ALTURA INFERIOR A 1,50
- A PORCENTAGEM DE PESSOAS COM OLHOS AZUIS ENTRE TODAS AS PESSOAS ANALIZADAS
- A QUANTIDADE DE PESSOAS RUIVAS QUE NÃO POSSUEM OLHOS AZUIS
*///PROGRAMA DESENVOLVIDO POR FRANCISCO HENRIQUE (francisco_francisco123@outlook.com)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //VARIÁVEIS DE RECEBIMENTO DE DADOS
    int idade[20], opcaoO, opcaoC;
    float altura[20], peso[20];
    int  m_idade=0;
    float p_olhos=0;
    //CONTADORES
    int NumP=0, i=0, O_A=0, C_R=0, i50_p60=0, divisor=0;
    //ACUMULADORES
    int media_idade=0;

    //coloca acentuação em todos os textos do programa
    setlocale(LC_ALL, "portuguese");
    //pede o número de pessoas a ser cadastradas
    printf("Digite a quantidade de pessoas que quer cadastrar: \n"); scanf("%d", &NumP);
    //faz uma estrutura de repetição para cada pessoa a ser cadastrada
    for(i=0; i<NumP; i++)
    {
    //pede os dados da pessoa cadastrada
        printf("Digite a idade do %dº cadastrado: \n",  i+1); scanf("%d", &idade[i]);
        printf("Digite a altura do %dº cadastrado: \n", i+1); scanf("%f", &altura[i]);
        printf("Digite o peso do %dº cadastrado: \n",   i+1); scanf("%f", &peso[i]);

        printf("Selecione uma das cores de olhos\n");
        printf(" 1-Azul  2-Preto  3-Castanho  4-Verde\n\n");  scanf("%d", &opcaoO);

        printf("\n\nSelecione uma das cores de cabelo\n");
        printf(" 1-Preto  2-Loiro  3-Castanho  4-Ruivo\n\n"); scanf("%d", &opcaoC);
    //confere se as informações estão dentro do requisitado e atribui os valores e contadores necessários
        if(idade[i] > 50 && peso[i] < 60){i50_p60++;}
        if(altura[i] < 1,50){divisor++; media_idade += idade[i];}
        if(opcaoO == 1){O_A++;}
        if(opcaoC == 4 && opcaoO != 1){C_R++;}
        system("cls");
    }
    m_idade = media_idade / divisor;
    if(O_A==0){p_olhos==0;}else{p_olhos = (NumP / O_A) * 100;}
    //exibe o resultado final

    printf("Pessoas com idade maior que 50 e peso menor que 60kg: %d\n", i50_p60);
    printf("A media de idades das pessoas com altura inferior a 150: %d\n", m_idade);
    printf("A porcentagem de pessoas com olhos azuis: %f\n", p_olhos);
    printf("Ruivos sem olhos azuis: %d\n", C_R);

    return 0;
}

/*
EM UMA F�BRICA TRABALHAM HOMENS E MULHERES DIVIDIDOS EM 3 CLASSES
TRABALHADORES QUE PRODUZEM AT� 30 PE�AS POR M�S - CLASSE 1
TRABALHADORES QUE PRODUZEM DE 31 � 35 PE�AS POR M�S - CLASSE 2
TRABALHADORES QUE PRODUZEM ACIMDA DE 35 PE�AS POR M�S - CLASSE 3

A CLASSE 1 RECEBE SAL�RIO M�NIMO, A CLASSE 2 RECEBE SAL�RIO M�NIMO MAIS 3% DO SAL�RIO
M�NIMO POR PE�A, ACIMA DE 30 PE�AS INICIAIS.
A CLASSE 3 RECEBE SAL�RIO M�NIMO MAIS 5% POR PE�A, ACIMA DE 35 PE�AS INICIAIS.

FA�A UM PROGRAMA QUE RECEBA O "PRONTU�RIO", O N�MERO DE PE�AS PRODUZIDAS NO M�S, O SEXO DO
OPER�RIO, CALCULE E MOSTRE:
-N�MERO DO OPER�RIO E SEU SAL�RIO
-
-O N�MERO TOTAL DE PE�AS PRODUZIDAS
-A M�DIA DE PE�AS PRODUZIDAS PELOS HOMENS
-A M�DIA DE PE�AS PRODUZIDAS PELAS MULHERES
-O PRONTU�RIO DO OPER�RIO COM MAIS SAL�RIO
*///programado por FRANCISCO HENRIQUE (francisco_francisco123@outlook.com)


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float numPecas, numPecasF, F, numPecasM, M, salario, maior=0;
    float mediaM, mediaF;
    int i, numF, sexo;

    setlocale(LC_ALL, "portuguese");
    printf("Digite a quantidade de funion�rios a serem cadastrados: "); scanf("%d", &numF);

    for(i=0; i<numF; i++)
    {
        system("cls");
        printf("Digite o Sexo do %d� funcion�rio 1-FEMININO  2-MASCULINO: ", i+1); scanf("%d", &sexo);
        printf("\nDigite o n�mero de pe�as produzidas: "); scanf("%f", &numPecas);

        if(sexo==1){numPecasF+=numPecas; F++;} else if (sexo==2) {numPecasM+=numPecas; M++;}
        if(numPecas <= 30){salario = 998;}
        else if(numPecas >30 && numPecas <36){salario = 998 * ((numPecas - 30) * 0,3);}
        else if(numPecas >35) {salario = 998 * ((numPecas - 35) * 0,5);}
        if(salario > maior){maior = salario;}
    }
    system("cls");
    mediaF = numPecasF / F;
    mediaM = numPecasM / M;

    printf("\nM�dia de pe�as feitas por Homens: %f", mediaM);
    printf("\nM�dia de pe�as feitas por mulheres: %f", mediaF);
    printf("\nO maior sal�rio entre os funcion�rios �: %f", maior);



    return 0;
}




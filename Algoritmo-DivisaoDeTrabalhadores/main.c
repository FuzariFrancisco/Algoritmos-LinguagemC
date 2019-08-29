/*
EM UMA FÁBRICA TRABALHAM HOMENS E MULHERES DIVIDIDOS EM 3 CLASSES
TRABALHADORES QUE PRODUZEM ATÉ 30 PEÇAS POR MÊS - CLASSE 1
TRABALHADORES QUE PRODUZEM DE 31 Á 35 PEÇAS POR MÊS - CLASSE 2
TRABALHADORES QUE PRODUZEM ACIMDA DE 35 PEÇAS POR MÊS - CLASSE 3

A CLASSE 1 RECEBE SALÁRIO MÍNIMO, A CLASSE 2 RECEBE SALÁRIO MÍNIMO MAIS 3% DO SALÁRIO
MÍNIMO POR PEÇA, ACIMA DE 30 PEÇAS INICIAIS.
A CLASSE 3 RECEBE SALÁRIO MÍNIMO MAIS 5% POR PEÇA, ACIMA DE 35 PEÇAS INICIAIS.

FAÇA UM PROGRAMA QUE RECEBA O "PRONTUÁRIO", O NÚMERO DE PEÇAS PRODUZIDAS NO MÊS, O SEXO DO
OPERÁRIO, CALCULE E MOSTRE:
-NÚMERO DO OPERÁRIO E SEU SALÁRIO
-
-O NÚMERO TOTAL DE PEÇAS PRODUZIDAS
-A MÉDIA DE PEÇAS PRODUZIDAS PELOS HOMENS
-A MÉDIA DE PEÇAS PRODUZIDAS PELAS MULHERES
-O PRONTUÁRIO DO OPERÁRIO COM MAIS SALÁRIO
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
    printf("Digite a quantidade de funionários a serem cadastrados: "); scanf("%d", &numF);

    for(i=0; i<numF; i++)
    {
        system("cls");
        printf("Digite o Sexo do %dº funcionário 1-FEMININO  2-MASCULINO: ", i+1); scanf("%d", &sexo);
        printf("\nDigite o número de peças produzidas: "); scanf("%f", &numPecas);

        if(sexo==1){numPecasF+=numPecas; F++;} else if (sexo==2) {numPecasM+=numPecas; M++;}
        if(numPecas <= 30){salario = 998;}
        else if(numPecas >30 && numPecas <36){salario = 998 * ((numPecas - 30) * 0,3);}
        else if(numPecas >35) {salario = 998 * ((numPecas - 35) * 0,5);}
        if(salario > maior){maior = salario;}
    }
    system("cls");
    mediaF = numPecasF / F;
    mediaM = numPecasM / M;

    printf("\nMédia de peças feitas por Homens: %f", mediaM);
    printf("\nMédia de peças feitas por mulheres: %f", mediaF);
    printf("\nO maior salário entre os funcionários é: %f", maior);



    return 0;
}




/*
UMA EMPRESA DECIDIU FAZER UM LEVANTAMENTO EM RELA��O AOS CANDIDATOS QUE SE APRESENTARAM PARA O
PREENCHIMENTO DE VAGAS NO QUADRO DE FUNCION�RIOS SUPONDO QUE VOC� SEJA O PROGRAMADOR DESSA
EMPRESA, FA�A UM PROGRAMA QUE CALCULE E MOSTRE:
-O N�MERO DE CANDIDATOS MASCULINOS
-O N�MERO DE CANDIDATOS FEMININOS
-A IDADE M�DIA DOS HOMENS QUE J� TEM EXPERI�NCIA NA �REA
-A PORCENTAGEM DOS HOENS COM MAIS DE 45 ANOS ENTRE O TOTAL DE HOMENS
-O N�MERO DE MULHERES COM IDADE INFERIOR A 35 ANOS E EXPERI�NCIA NA �REA
-A MENOR IDADE ENTRE AS MULHERES QUE J� TEM EXPERI�NIA
*///PROGRAMA DESENVOLVIDO POR FRANCISCO HENRIQUE (francisco_francisco123@outlook.com)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //vari�veis para receber os valores que o usu�rio insere
    int numC, sexo[20]={0}, exp[20]={0}, idade[20]={0}, media_idade=0, menor_idade, media_final;
    float porcent=0;
    //contadores do programa
    int i=0, sex_m=0, sex_f=0, fem_exp_35=0;
    float  divisor1=0, masc_45=0;
    //colocando acentua��o nos textos do programa
    setlocale(LC_ALL, "portuguese");
    //pergunta ao usu�rio quantas pessoas v�o ser entrevistadas
    printf("Digite o n�mero de candidatos entrevistados: "); scanf("%d", &numC);
    //usa uma estrutura de repeti��o pra repetir o programa equivalente ao n�mero de entrevistados
    for(i=0; i<numC; i++)
    {
        //perguta ao usu�rio, e armazena as informa��es necess�rias nas vari�veis
        printf("\nSelecione o Sexo do %d� candidato  1-Masculino  2-Feminino :", i+1); scanf("%d", &sexo[i]);
        printf("\nDigite a idade do %d� entrevistado: ", i+1); scanf("%d", &idade[i]);
        printf("\nO %d� entrevistado possui esperi�nia na �rea 1-SIM  2-N�O : ", i+1); scanf("%d", &exp[i]);
        //v� qual o sexo do candidato e armazena um contador na vari�vel equivalente � ele
        if(sexo[i]==1){sex_m++;}else if(sexo[i]==2){sex_f++;}else{printf("SEXO INV�LIDO...");}
        //v� se o sexo do candidato � masculino e se ele tem experi�ncia na �rea e atribui
        //as vari�veis a idade e contador de divis�o
        if(sexo[i]!=2 && exp!=2){divisor1++; media_idade+=idade[i];}
        //v� se o sexo � masculino e se tem mais de 45 anos e atribui ao contador
        if(sexo[i]==1 && idade[i]>45){masc_45++;}
        //v� se o sexo se o sexo � feminino menor de 35 anos e com esperi�ncia na �rea e atribui
        //para o contador
        if(sexo[i]==2 && idade[i]<35 && exp[i]==1){fem_exp_35++;}
            system("cls");
    }
    if(media_idade==0){media_final=0;} else{media_final = media_idade / divisor1;}
    if(sex_m==0){porcent=0;} else{porcent = (masc_45/sex_m)*100;}

    //apresentando o n�meros de cada sexo de candidatos
    printf("---------------------------------------\n");
    printf("O n�mero de candidatos masculinos �: %d\n\n", sex_m);
    printf("O n�mero de candidatos femininos �: %d\n\n", sex_f);
    //apresentando a m�dia de idade de candidatos masculinos com experi�ncia na �rea
    printf("A idade m�dia dos homens que j� tem experi�ncia no servi�o: %d\n\n", media_final);
    //apresentando a porcentagem de homens com 45 anos+ entre todos homens entrevistados
    printf("A porcentagem de homens com mais de 45 anos entre todos homens: %f\n\n", porcent);
    //apresentando o n�mero de mulheres com idade inferior a 35 experi�ncia na �rea
    printf("O n�mero de mulheres com menos de 35 anos e experi�ncia na �rea �: %d\n\n", fem_exp_35);
    //checa todas as idades do sexo feminino e pega a menor delas, antes de ome�ar atribui um valor inicial
    menor_idade=idade[0];
    for(i=0; i<numC; i++)
    {
        if(sexo[i]==1){menor_idade=0;}
        else if (exp[i]==1)
            {
                if(idade[i]<menor_idade){menor_idade=idade[i];}
            }
    }
    //apresenta a menor idade
    printf("A menor idade entre as mulheres com experi�ncia �: %d", menor_idade);
    return 0;
}

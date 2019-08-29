/*
UMA EMPRESA DECIDIU FAZER UM LEVANTAMENTO EM RELAÇÃO AOS CANDIDATOS QUE SE APRESENTARAM PARA O
PREENCHIMENTO DE VAGAS NO QUADRO DE FUNCIONÁRIOS SUPONDO QUE VOCÊ SEJA O PROGRAMADOR DESSA
EMPRESA, FAÇA UM PROGRAMA QUE CALCULE E MOSTRE:
-O NÚMERO DE CANDIDATOS MASCULINOS
-O NÚMERO DE CANDIDATOS FEMININOS
-A IDADE MÉDIA DOS HOMENS QUE JÁ TEM EXPERIÊNCIA NA ÁREA
-A PORCENTAGEM DOS HOENS COM MAIS DE 45 ANOS ENTRE O TOTAL DE HOMENS
-O NÚMERO DE MULHERES COM IDADE INFERIOR A 35 ANOS E EXPERIÊNCIA NA ÁREA
-A MENOR IDADE ENTRE AS MULHERES QUE JÁ TEM EXPERIÊNIA
*///PROGRAMA DESENVOLVIDO POR FRANCISCO HENRIQUE (francisco_francisco123@outlook.com)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //variáveis para receber os valores que o usuário insere
    int numC, sexo[20]={0}, exp[20]={0}, idade[20]={0}, media_idade=0, menor_idade, media_final;
    float porcent=0;
    //contadores do programa
    int i=0, sex_m=0, sex_f=0, fem_exp_35=0;
    float  divisor1=0, masc_45=0;
    //colocando acentuação nos textos do programa
    setlocale(LC_ALL, "portuguese");
    //pergunta ao usuário quantas pessoas vão ser entrevistadas
    printf("Digite o número de candidatos entrevistados: "); scanf("%d", &numC);
    //usa uma estrutura de repetição pra repetir o programa equivalente ao número de entrevistados
    for(i=0; i<numC; i++)
    {
        //perguta ao usuário, e armazena as informações necessárias nas variáveis
        printf("\nSelecione o Sexo do %dº candidato  1-Masculino  2-Feminino :", i+1); scanf("%d", &sexo[i]);
        printf("\nDigite a idade do %dº entrevistado: ", i+1); scanf("%d", &idade[i]);
        printf("\nO %dº entrevistado possui esperiênia na área 1-SIM  2-NÃO : ", i+1); scanf("%d", &exp[i]);
        //vê qual o sexo do candidato e armazena um contador na variável equivalente á ele
        if(sexo[i]==1){sex_m++;}else if(sexo[i]==2){sex_f++;}else{printf("SEXO INVÁLIDO...");}
        //vê se o sexo do candidato é masculino e se ele tem experiência na área e atribui
        //as variáveis a idade e contador de divisão
        if(sexo[i]!=2 && exp!=2){divisor1++; media_idade+=idade[i];}
        //vê se o sexo é masculino e se tem mais de 45 anos e atribui ao contador
        if(sexo[i]==1 && idade[i]>45){masc_45++;}
        //vê se o sexo se o sexo é feminino menor de 35 anos e com esperiência na área e atribui
        //para o contador
        if(sexo[i]==2 && idade[i]<35 && exp[i]==1){fem_exp_35++;}
            system("cls");
    }
    if(media_idade==0){media_final=0;} else{media_final = media_idade / divisor1;}
    if(sex_m==0){porcent=0;} else{porcent = (masc_45/sex_m)*100;}

    //apresentando o números de cada sexo de candidatos
    printf("---------------------------------------\n");
    printf("O número de candidatos masculinos é: %d\n\n", sex_m);
    printf("O número de candidatos femininos é: %d\n\n", sex_f);
    //apresentando a média de idade de candidatos masculinos com experiência na área
    printf("A idade média dos homens que já tem experiência no serviço: %d\n\n", media_final);
    //apresentando a porcentagem de homens com 45 anos+ entre todos homens entrevistados
    printf("A porcentagem de homens com mais de 45 anos entre todos homens: %f\n\n", porcent);
    //apresentando o número de mulheres com idade inferior a 35 experiência na área
    printf("O número de mulheres com menos de 35 anos e experiência na área é: %d\n\n", fem_exp_35);
    //checa todas as idades do sexo feminino e pega a menor delas, antes de omeçar atribui um valor inicial
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
    printf("A menor idade entre as mulheres com experiência é: %d", menor_idade);
    return 0;
}

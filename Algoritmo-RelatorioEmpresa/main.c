/*
DESENVOLVA UM PROGRAMA CONFORME ORIENTAÇÃO ABAIXO.
UMA EMPRESA PRETENDE APRESENTAR UM RELATÓRIO CONFORME AS SEGUINTES ENTRADAS
DE DADOS E LAY-OUT.

ENTRADA DE DADOS:
- DESCRIÇÃO DO PRODUTO;
- VALOR DO PRODUTO;
- QUANTIDADE;           (ARMAZENE TODOS EM VETOR)

EXIBIR:
- RESUMO DE VENDAS;
- PRODUTO          VALOR            QTD          TOTAL
- EXIBIR NO FINAL DO PROCESSAMENTO
TOTAL GERAL DE VENDAS
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    int QtdProdutos, i,j;
    setlocale(LC_ALL, "portuguese");

    printf("Digite quantos produtos serão cadastrados: "); scanf("%d", &QtdProdutos);

    char Descricao[QtdProdutos][30];
    float ValorUnitario[QtdProdutos], Totais=0, TotalGeral=0;
    int Quantidade[QtdProdutos];

    system("cls");

    for(i=0; i < QtdProdutos; i++){

            printf("\nDigite a descrição do %dº produto: ", i+1);fflush(stdin);
            fgets(Descricao[i], 29, stdin);

            printf("\nDigite o valor unitário do %dº produto: ", i+1);
            scanf("%f", &ValorUnitario[i]);

            printf("\nDigite a Quantidade do %dº produto: ", i+1);
            scanf("%d", &Quantidade[i]);
        }
    system("cls");

    printf("******************\n");
    printf("*RESUMO DE VENDAS*\n");
    printf("******************\n\n");
    for(i=0; i<QtdProdutos; i++)
    {
        Totais = ValorUnitario[i] * Quantidade[i];
        TotalGeral += Totais;
        printf("\n*****************************************\n");
        printf("Produto: %s Valor: %.2f Quantidade: %2d Total: %.2f",
               Descricao[i], ValorUnitario[i], Quantidade[i], Totais);
        printf("\n*****************************************\n\n");

    }

    printf("\n*************************************\n");
    printf("*Total geral de Vendas: %3.2f      \n", TotalGeral);
    printf("*************************************\n\n");


    return 0;
}

/*
DESENVOLVA UM PROGRAMA QUE RECEBA OS DADOS A SEGUIR DE VÁRIOS PRODUTOS COMO:
-PREÇO UNITÁRIO;
-PAIS DE ORIGEM (1-EUA, 2-MÉXICO, 3-OUTROS);
-MEIO DE TRANSPORTE (T-TERRESTRE, F-FLUVIAL, E A-AÉREO);
-CARGA PERIGOSA (S-SIM , N-NÃO);
CALCULE E MOSTRE:
*IMPOSTOS*
PREÇO UNITÁRIO | PERCENTUAL/IMPOSTO
R$ 100,00      |5%
> R$ 100,00    |10%

*VALOR DE TRANSPORTE*
CARGA PERIGOSA | PAIS DE ORIGEM | VALOR DE TRANSPORTE
SIM            | 1              | R$ 50,00
               | 2              | R$ 35,00
               | 3              | R$ 24,00
NÃO            | 1              | R$ 12,00
               | 2              | R$ 35,00
               | 3              | R$ 60,00

*VALOR DO SEGURO*
OS IMPOSTOS DE ORIGEM MÉXICO, E OS PRODUTOS QUE UTILIZA DE TRANSPORTE AÉREO PAGAM
METADE DO VALOR DO SEU PREÇO UNITÁRIO COMO SEGURO.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Processo()
{
    system("cls");
    //Variaveis Dados
    float PrecoUnitario,ValorTransporte;
    int Pais, MeioTransporte;
    char CargaPerigosa;
    //Variáveis de Processamento
    float ValTransporteS[3] = {50, 35, 24};
    float ValTransporteN[3] = {12, 35, 60};
    float Imposto, Seguro;

    setlocale(LC_ALL, "portuguese");
    //Recebendo dados
    printf("\nDigite o preço unitário do produto: "); scanf("%f", &PrecoUnitario);
    printf("\nEscolha um país 1-EUA, 2-MÉXICO, 3-OUTROS : "); scanf("%d", &Pais);
    printf("\nDigite o meio de transporte 1-TERRESTRE 2-FLUVIAL 3-AÉREO : "); scanf("%d", &MeioTransporte); fflush(stdin);
    printf("\nCarga perigosa? 1-SIM 2-NÃO : "); scanf("%c", &CargaPerigosa); fflush(stdin);
    //Calculando Imposto
    if(PrecoUnitario <= 100) {
        Imposto = PrecoUnitario * 0.5;
    }
    else {
        Imposto = PrecoUnitario * 0.10;
    }
    //Calculando valor de transporte
    if(CargaPerigosa == "S") {
        ValorTransporte = ValTransporteS[Pais-1];
    }
    else if(CargaPerigosa == "N") {
        ValorTransporte = ValTransporteN[Pais-1];
    }
    //Calculando valor do seguro
    if(Pais == 2 || MeioTransporte == 3) {
        Seguro = PrecoUnitario / 2;
    }else {
        Seguro = 0;
    }
    system("cls");
    printf("\nValor unitário: %f\n", PrecoUnitario, CargaPerigosa);
    //Verifica se a carga é perigosa
    if (Pais == 1) {
        printf("\nCarga Perigosa");
    }else if (Pais == 2) {
        printf("\nCarga não perigosa");
    }
    //Condicional para mostrar país
    if (Pais == 1) {
        printf("\nPaís: EUA");
    }else if (Pais == 2) {
        printf("\nPaís: MÉXICO");
    }else if (Pais == 2) {
        printf("\nPaís: OUTROS");
    }
    //Condicional para mostrar o Transporte
    if (MeioTransporte == 1) {
        printf("\nMeio de transporte: TERRESTRE");
    }else if (MeioTransporte == 2) {
        printf("\nMeio de transporte: FLUVIAL");
    }else if (MeioTransporte == 2) {
        printf("\nMeio de transporte: AÉREO");
    }
    printf("\nValor do imposto : %f", Imposto);
    printf("\nValor do Seguro : %f", Seguro);
    printf("\nValor total: %f", Imposto+Seguro+PrecoUnitario);

}

int main()
{

    Processo();
    return 0;
}

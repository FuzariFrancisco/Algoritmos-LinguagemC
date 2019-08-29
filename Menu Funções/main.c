#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float quadrado(float l1){
    float valQuad;
    valQuad = l1 * l1;
    return(valQuad);}

float retangulo(float l1, float l2)
{
    float valRet;
    valRet = l1 * l2;
    return(valRet);
}

float triangulo(float l1, float l2)
{
    float valTria;
    valTria = (l1 * l2)/2;
    return(valTria);
}


int main()
{
  int opcao,enter;
  float lado1, lado2;

  setlocale(LC_ALL, "portuguese");

  while(opcao != 4)
  {
      printf("\t 1 - �rea do quadrado\n");
      printf("\t 2 - �rea do ret�ngulo\n");
      printf("\t 3 - �rea do tri�ngulo\n");
      printf("\t 4 - Sair\n");
      printf("\t\tEscolha a op��o desejada\n\n"); scanf("%d", &opcao);

      switch(opcao)
      {
      case 1:
        {
            printf("Digite o valor de um dos lados do quadrado "); scanf("%f", &lado1);
            printf("\nA �rea do quadrado �: %6f\n",quadrado(lado1));
            while(enter != 13)
            {
                printf("PRESSIONE ENTER"); enter = getch();
            }
            system("cls");
            enter = 0;
            break;
        }
        case 2:
        {
            printf("Digite um dos lados do ret�ngulo com maior valor "); scanf("%f", &lado1);
            printf("\nDigite um dos lados do ret�ngulo com menor valor "); scanf("%f", &lado2);
            printf("\nA �rea do ret�ngulo �: %6f\n",retangulo(lado1,lado2));
            while(enter != 13)
            {
                printf("PRESSIONE ENTER"); enter = getch();
            }
            system("cls");
            enter = 0;
            break;
        }
        case 3:
        {
           printf("Digite o valor do cateto oposto "); scanf("%f", &lado1);
           printf("Digite o valor do cateto adjacente "); scanf("%f", &lado2);
           printf("A �rea do tri�ngulo ret�ngulo �: %6f\n",triangulo(lado1,lado2));
           while(enter != 13)
            {
                printf("PRESSIONE ENTER"); enter = getch();
            }
            system("cls");
            enter = 0;
           break;
        }
        case 4:
        {
            printf("Voc� escolheu sair\n");
            break;
        default:
            system("cls");
        }
      }
  }
    return 0;
}

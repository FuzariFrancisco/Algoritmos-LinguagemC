#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int ano1,ano2,cont;
    setlocale(LC_ALL,"portuguese");
    printf("Leia o Ano e saiba se é Bissexto\n");
    printf("Digite o Ano inicial\n"); scanf("%d",&ano1);
    printf("Digite o ano Final\n"); scanf("%d",&ano2);
    cont=ano1;

    for (ano1; cont<=ano2; cont++)
    {
    if(cont %100!=0 && cont%4==0)
       {
           printf(" %d Bissexto\n",cont);
       }
        else if (cont %400==0)
        {
            printf(" %d Bissexto\n",cont);
        }
        else
            printf(" %d Não é Bissexto\n",cont);
    }
    return 0;
}

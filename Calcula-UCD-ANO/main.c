#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num, cent, deze, unid,aux;
    setlocale(LC_ALL, "portuguese");
    printf("Digite um número de 1 a 999\n"); scanf("%d", &num);

    cent = num /100;
    aux = num % 100;
    deze = aux / 10;
    unid = num % 10;





    printf("%d Centenas \n",cent);
    printf("%d Dezenas \n",deze);
    printf("%d Unidades \n",unid);

    return 0;
}

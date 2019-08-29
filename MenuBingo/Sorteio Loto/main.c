#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define tamanho 24
#define limite 74
#define VALIDO 1
#define REPETIDO 0


int main()
{
    int num[tamanho];
    int aux, menor, i, j, status;
// SORTEIO DE  N�MEROS DIFERENTES
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));  //possibilita o sorteio de novos n�meros

    printf("N�meros Sorteados: \n");
    for (i=0; i<tamanho; i++)
    {
        do {
             num[i] = rand() % limite+1;
             status = VALIDO;
             for (j=0; (j<i) && (status == VALIDO); ++j)
                if (num[i] == num[j])
                   status = REPETIDO;
            } while (status == REPETIDO);

        printf("\t%d",num[i]);
    }
 // ENCONTRAR O MENOR N�MERO SORTEADO
    menor = num[0];
    for (i=0; i<tamanho; i++)
    {
        if (num[i]<=menor)
        {
            menor=num[i];
        }
    }
    printf("\n\n\tO menor valor sorteado �: %d", menor);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define tamanho 5
#define limite 98
#define VALIDO 1
#define REPETIDO 0


int main()
{
    int loto[tamanho];
    int aux, menor, i, j, status,posi;
// SORTEIO DE 5 N�MEROS DIFERENTES
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));  //possibilita o sorteio de novos n�meros

    printf("N�meros Sorteados: \n");
    for (i=0; i<tamanho; i++)
    {
        do {
             loto[i] = rand() % limite + 1;
             status = VALIDO;
             for (j=0; (j<i) && (status == VALIDO); ++j)
                if (loto[i] == loto[j])
                   status = REPETIDO;
            } while (status == REPETIDO);

        printf("\t%d",loto[i]);
    }
 // ENCONTRAR O MENOR N�MERO SORTEADO
    menor = loto[0];
    for (i=0; i<tamanho; i++)
    {
        if (loto[i]<=menor)
        {
            menor=loto[i];
        }
    }
    printf("\n\n\tO menor valor sorteado �: %d", menor);
 // MOSTRAR A POSI��O DO MENOR N�MERO
    menor = loto[0];

    for(i=0; i < tamanho; i++)

      if(loto [i] < menor)
      {
          menor = loto[i];
          if(loto [i] = menor)
          {
              posi = i;
          }
      }
    printf("\n\tO menor valor est� na posi��o %d", posi+1);
 // ORDENAR OS N�MEROS EM ORDEM CRESCENTE
    printf("\n\n Os valores em ordem s�o : ");
    for (i=0; i<tamanho; i++)
    {
        for(j=i+1; j<=tamanho; j++)
            if (loto[i]>loto[j])
             {
               aux = loto[i];
               loto[i] = loto[j];
               loto[j] = aux;
             }
    }
    for (i=0; i<tamanho; i++)
        printf("\t%d", loto[i]);
        printf("\n\n");


    return 0;
}

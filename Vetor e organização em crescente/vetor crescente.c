#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tamanho 5

int main()
{
    int vetor[tamanho],i,menor,posi,aux;
    posi = 0;

    setlocale(LC_ALL, "portuguese");

    for(i=0; i < tamanho; i++)
        {
          printf("Digite o %d° numero\n", i+1);scanf("%d", &vetor[i]);
        }

        for(i=0; i < tamanho; i++)
        if(vetor[i] > vetor[i+1])
        {
         aux = vetor[i];
         vetor[i] = vetor[i+1];
         vetor[i+1] = aux;
         aux = 0;
        }

        for(i=0; i < tamanho; i++)
        if(vetor[i] > vetor[i+1])
        {
         aux = vetor[i];
         vetor[i] = vetor[i+1];
         vetor[i+1] = aux;
         aux = 0;
        }
        for(i=0; i < tamanho; i++)
        if(vetor[i] > vetor[i+1])
        {
         aux = vetor[i];
         vetor[i] = vetor[i+1];
         vetor[i+1] = aux;
         aux = 0;
        }

    printf("\nOs Números Lidos são:\n");

    for(i=0; i < tamanho; i++)
        {
          printf("\t%d", vetor[i]);
        }

      menor = vetor[0];
    for(i=0; i < tamanho; i++)

      if(vetor [i] < menor)
      {
          menor = vetor[i];
          if(vetor [i] = menor)
          {
              posi = i;
          }
      }

      printf("\n\nmenor: %d\n",menor);
      printf("\n\nMenor está no Vetor:[%d]\n",posi);

    return 0;
}

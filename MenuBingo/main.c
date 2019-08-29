#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 24
#define limite 74
#define VALIDO 1
#define REPETIDO 0


int main()
{
    int num[tamanho];
    int nump[tamanho];
    int aux, menor, i, j, status,opcao,oi;
    char enter;
    oi = 1;
    num[tamanho]=0;
    nump[tamanho]=0;

    srand(time(NULL));

    for (i=0; i<tamanho; i++)
    {
        num[i]=0;
    }
    while(opcao!=4)
    {
        printf("SELECIONE UMA OPCAO\n\n");
        printf("\t 1 - Sorteie os numeros da cartela\n");
        printf("\t 2 - Ordene os numeros da cartela\n");
        printf("\t 3 - Exiba os numeros da cartela\n");
        printf("\t 4 - Sair\n\n"); scanf("%d", &opcao);


        switch(opcao)
        {
        case 1:
            {
                printf("Os numeros foram sorteados\n");
                for (i=0; i<tamanho; i++)
                   {
                     do {
                          num[i] = rand() % limite+1;
                          if (num[i]<10)
                          {
                              num[i] = ("%d%d",0,num[i]);
                          }
                          status = VALIDO;
                          for (j=0; (j<i) && (status == VALIDO); ++j)
                           if (num[i] == num[j])
                           status = REPETIDO;
                        } while (status == REPETIDO);


                   }

                while(enter != 13)
                {
                    printf("\nPressione Enter"); enter = getch();
                }
                system("cls");
                enter = 0;
                break;
            }
        case 2:
            {
                printf("\n\n OS numeros foram ordenados");
                for (i=0; i<tamanho; i++)
                  {
                    for(j=i+1; j<=tamanho; j++)
                      if (num[i]>num[j])
                        {
                            aux = num[i];
                            num[i] = num[j];
                            num[j] = aux;
                            nump[i] = num[i];
                        }
                  }
                for (i=0; i<tamanho; i++)


                while(enter != 13)
                {
                    printf("\nPressione Enter"); enter = getch();
                }
                system("cls");
                enter = 0;
                break;
            }
        case 3:
            {

               printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",218,196,196,196,194,196,196,196,194,196,196,196,194,196,196,196,194,196,196,196,191);
               printf("%c%2d %c%2d %c%2d %c%2d %c%2d %c\n",179,num[1],179,num[6],179,num[11],179,num[15],179,num[20],179);
               printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,180);
               printf("%c%2d %c%2d %c%2d %c%2d %c%2d %c\n",179,num[2],179,num[7],179,num[12],179,num[16],179,num[21],179);
               printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,180);
               printf("%c%2d %c%2d %c   %c%2d %c%2d %c\n",179,num[3],179,num[8],179,179,num[17],179,num[22],179);
               printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,180);
               printf("%c%2d %c%2d %c%2d %c%2d %c%2d %c\n",179,num[4],179,num[9],179,num[13],179,num[18],179,num[23],179);
               printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,180);
               printf("%c%2d %c%2d %c%2d %c%2d %c%2d %c\n",179,num[5],179,num[10],179,num[14],179,num[19],179,num[24],179);
               printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",192,196,196,196,193,196,196,196,193,196,196,196,193,196,196,196,193,196,196,196,217);



                while(enter != 13)
                {
                    printf("\nPressione Enter"); enter = getch();
                }
                system("cls");
                enter = 0;
                break;
            }
        case 4:
            {
                printf("Escolheu Sair");
                break;
            }

        }
    }
    return 0;
}


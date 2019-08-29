#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int leituraMatriz(int Matri[3][3])
{
    int i,j,c,enter;
    i = 0;
    j = 0;

    for(i=0; i<3; i++)
    {
    for(j=0; j<3; j++)
    {
       printf("Digite o numero de posição a%d%d da matriz\n", i+1,j+1); scanf("%d", &Matri[i][j]);

    }
    }

    while(enter != 13)
    {
        printf("\t\tPRESSIONE ENTER...."); enter = getch();
    }
    system("cls");

    return(Matri[3][3]);
}

int determinante(int matriz_a[3][3]){

  int det[6];
  int matriz_det[3][5] = {0};
  int det_result, j, i;

    for(j=0;j<=2;j++){
        for(i=0;i<=2;i++){
         matriz_det [j][i] = matriz_a[j][i];
        }
    }

    for(j=0;j<=2;j++){
        for(i=0;i<=1;i++){
          matriz_det[j][i+3] = matriz_a[j][i];
        }
    }

    for(i=0;i<=2;i++){
      det[i] = matriz_det[0][i] * matriz_det[1][i+1] * matriz_det[2][i+2];

    }

    for(i=0;i<=2;i++){
      det[i+3] = matriz_det[0][i+2] * matriz_det[1][i+1] * matriz_det[2][i];
    }

      det_result = -(det[3]+det[4]+det[5])+(det[0]+det[1]+det[2]);

return(det_result);

}



int main()
{
    int matrizA[3][3],matrizB[3][3],matrizSoma[3][3],matrizProd[3][3],matrizDetA,matrizDetB,opcao,i,j,enter;
    setlocale(LC_ALL, "portuguese");

    for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
       {
    matrizA[i][j]=0;
    matrizB[i][j]=0;
    matrizSoma[i][j]=0;
    matrizProd[i][j]=0;
       }
    }
    matrizDetA=0;
    matrizDetB=0;
    enter = 0;


    while(opcao != 7)
    {
        printf("\t 1 - Inserir dados na matriz A\n");
        printf("\t 2 - Inserir dados na matriz B\n");
        printf("\t 3 - Visualizar dados da matriz A e matriz B\n");
        printf("\t 4 - Matriz soma\n");
        printf("\t 5 - Matriz produto\n");
        printf("\t 6 - Determinantes A e B\n");
        printf("\t 7 - Sair\n\n");
        printf("Selecione a opção desejada\n"); scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            {
                leituraMatriz(matrizA);
                break;
            }
        case 2:
            {
                leituraMatriz(matrizB);
                break;
            }
        case 3:
            {
                printf("\t\t %3d  %3d  %3d \t\t\t %3d  %3d  %3d \n", matrizA[0][0],matrizA[0][1],matrizA[0][2],matrizB[0][0],matrizB[0][1],matrizB[0][2]);
                printf("\t\t %3d  %3d  %3d \t\t\t %3d  %3d  %3d \n", matrizA[1][0],matrizA[1][1],matrizA[1][2],matrizB[1][0],matrizB[1][1],matrizB[1][2]);
                printf("\t\t %3d  %3d  %3d \t\t\t %3d  %3d  %3d \n", matrizA[2][0],matrizA[2][1],matrizA[2][2],matrizB[2][0],matrizB[2][1],matrizB[2][2]);
                    while(enter != 13)
                    {
                        printf("\t\tPRESSIONE ENTER...."); enter = getch();
                    }
                    system("cls");
                    enter = 0;
                break;
            }
        case 4:
            {
                for(i=0; i<3; i++)
                {
                    for(j=0; j<3; j++)
                    {
                        matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
                    }
                }

                printf("\t\t %3d  %3d  %3d \n", matrizSoma[0][0],matrizSoma[0][1],matrizSoma[0][2]);
                printf("\t\t %3d  %3d  %3d \n", matrizSoma[1][0],matrizSoma[1][1],matrizSoma[1][2]);
                printf("\t\t %3d  %3d  %3d \n", matrizSoma[2][0],matrizSoma[2][1],matrizSoma[2][2]);

                    while(enter != 13)
                    {
                        printf("\t\tPRESSIONE ENTER...."); enter = getch();
                    }
                    system("cls");
                    enter = 0;
                    break;

            }

        case 5:
            {
                for(i=0; i<3; i++)
                {
                    for(j=0; j<3; j++)
                    {
                        matrizProd[i][j] = (matrizA[i][0] * matrizB[0][j])+(matrizA[i][1] * matrizB[1][j])+(matrizA[i][2] * matrizB[2][j]);
                    }
                }

                printf("\t\t %3d  %3d  %3d \n", matrizProd[0][0],matrizProd[0][1],matrizProd[0][2]);
                printf("\t\t %3d  %3d  %3d \n", matrizProd[1][0],matrizProd[1][1],matrizProd[1][2]);
                printf("\t\t %3d  %3d  %3d \n", matrizProd[2][0],matrizProd[2][1],matrizProd[2][2]);

                    while(enter != 13)
                    {
                        printf("\t\tPRESSIONE ENTER...."); enter = getch();
                    }
                    system("cls");
                    enter = 0;
                    break;

            }

        case 6:
            {
                matrizDetA = determinante(matrizA);
                matrizDetB = determinante(matrizB);

                printf("O determinante de A é: %d \t O determinante de B é: %d\n",matrizDetA, matrizDetB);

                    while(enter != 13)
                    {
                        printf("\t\tPRESSIONE ENTER...."); enter = getch();
                    }
                    system("cls");
                    enter = 0;
                break;
            }
        case 7:
            {
                printf("Desejou Sair");
                break;
        default:
            system("cls");
            }



        }


    }




    return 0;
}


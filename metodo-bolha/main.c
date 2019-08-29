#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
 char nome[10][40];
    char busca[40];
    char resp, x[40];
    int i, j, achou=0;

    setlocale(LC_ALL,"portuguese");
    printf("\t\tDigite 10 nomes\n");

    for(i=0; i<10; i++)
    {
        printf("\t\tDigite o %dº Nome: ", i+1);
        fgets(nome[i],40,stdin);
        fflush(stdin);
    }
    system("cls");
    printf("\n\t\tLista de Nomes: \n");

    for(i=0; i<10;i++){
       for(j=i+1; j<10; j++){
        if(strcmp(nome[i],nome[j])>0){
            strcpy(x,nome[i]);
            strcpy(nome[i],nome[j]);
            strcpy(nome[j],x);
        }
       }
       printf("\t\t%s", nome[i]);
    }
}

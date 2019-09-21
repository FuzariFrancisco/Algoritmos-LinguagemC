#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string.h>

typedef struct no{
int codigo;
char nome[10];
struct no*next;
struct no*back;
}no;

struct no *Corrente,*Auxiliar,*Auxiliar2,*Inicio, *Fim;

void Enterdata(){
     setlocale(LC_ALL,"portuguese");
     printf("\nDigite um código: ");
     scanf("%d",&Corrente->codigo);
     printf("\nDigite um nome: ");
     scanf("%s",&Corrente->nome);
}

int newinsert(no**lista){
    
    int Achou=0;
    
    if(Inicio==NULL)
	{
		Corrente=(no*)malloc(sizeof(no));
        Auxiliar=Corrente;
        Inicio = Corrente;
        Corrente->next=NULL;
        Corrente->back=NULL;
        Fim=Corrente;
        Enterdata();
        printf("Primeiro registro alocado");
        system("pause");
        Achou=1;
    }
	else
	{
		Corrente=(no*)malloc(sizeof(no));
		
		Auxiliar->next = Corrente;
		Corrente->back = Auxiliar;
		Corrente->next = NULL;
		Auxiliar = Corrente;
		Fim = Corrente;
		Enterdata();
	}
}
    
   /* if(Inicio==NULL)
	{
        Auxiliar=Corrente;
        Corrente->next=NULL;
        Inicio=Corrente;
        printf("Primeiro registro alocado");
        system("pause");
        Achou=1;
    }
	else
	{
      //  if(Auxiliar->codigo > Corrente->codigo){
       if(strcmp(Auxiliar->nome, Corrente->nome)==1)
	   {
           Corrente->next=Auxiliar;
           Inicio=Corrente;
           Achou=1;
           printf("\nElemento precede o primeiro elemento da lista!!\n");
           system("pause");
        }
		else
		{
           Auxiliar2=Auxiliar->next;
           while(Auxiliar2!= NULL){
            if((strcmp(Corrente->nome, Auxiliar->nome)==1) && (strcmp(Corrente->nome, Auxiliar2->nome)==-1)){
                Auxiliar->next=Corrente;
                Corrente->next=Auxiliar2;
                Achou=1;
                printf("\nElemento inserido no meio da lista!!\n");
                system("pause");
                break;
            }else{
                Auxiliar=Auxiliar->next;
                Auxiliar2=Auxiliar2->next;
            }
           }

        }

    if(Achou==0 && Auxiliar->next == NULL){
        Auxiliar->next=Corrente;
        Corrente->next=NULL;
        Achou=1;
        printf("\nElemento inserido no final da lista!!\n");
        system("pause");
    }*/

//}
int Exibir(no**lista){
	setlocale(LC_ALL,"portuguese");
    if(Inicio==NULL){
        printf("\nNenhum valor foi inserido\n");
        system("pause");
    }else{
        Corrente = Fim;

        while(Corrente != NULL){
              printf("\nCódigo:%d",Corrente->codigo);
              printf("\nNome:%s\n",Corrente->nome);
              Corrente = Corrente->back;
        }
        system("pause");
    }
}

int Search(no**lista){
    setlocale(LC_ALL,"portuguese");
    int NC;
    int Achou;
    if(Inicio==NULL){
        printf("\nNenhum valor foi inserido\n");
        system("pause");
    }else{
        printf("Digite um código a ser consultado: ");
        scanf("%d",&NC);
        Auxiliar=Inicio;
        Achou=0;
        while(Auxiliar!=NULL){
            if(NC==Auxiliar->codigo){
                printf("\nO código pesquisado foi: %d\n\nO nome relacionado é: %s\n",NC,Auxiliar->nome);
                system("pause");
                Achou=1;
                break;
            }else{
            Auxiliar=Auxiliar->next;
            }
        }
        if(Achou==0){
            printf("O valor inserido não foi encontrado na lista.\n");
            system("pause");
        }

    }
}
int Delete(no**lista){
    int CPD;
    int Achou;
    if(Inicio==NULL){
        printf("\nNenhum valor foi inserido\n");
        system("pause");
    }else{
        Corrente=Inicio;
        Achou=0;
        printf("\nDigite um código a ser deletado da lista: ");
        scanf("%d",&CPD);
        if(Corrente->codigo==CPD){
            Inicio=Inicio->next;
            free(Corrente);
            Achou=1;
            printf("\nRegistro deletado com sucesso!\n");
            system("pause");
        }else{
        Auxiliar=Corrente->next;
        while(Auxiliar!=NULL){
            if(CPD==Auxiliar->codigo){
                        Corrente->next=Auxiliar->next;
                        free(Auxiliar);
                        Achou=1;
                        printf("\nRegistro deletado com sucesso!");
                        system("pause");
            }else{
                Auxiliar=Auxiliar->next;
            }
        }
    }
        if(Achou==0){
            printf("O valor inserido não foi encontrado na lista!\n");
            system("pause");
        }
    }
}


int main()
{
	setlocale(LC_ALL,"portuguese");
    Corrente=NULL;
    Auxiliar=NULL;
    Inicio=NULL;
    int op;
    do{
        system("cls");
        printf("---------------------------------------------------------------\n");
        printf("\t\t\tAula 11/09");
        printf("\n---------------------------------------------------------------\n");
        printf("\t[1]Inserindo elemento na lista");
        printf("\n\t[2]Exibindo os dados da lista");
        printf("\n\t[3]Consultando a lista");
        printf("\n\t[4]Removendo os dados da lista");
        printf("\n\t[5]Alterando os dados da lista");
        printf("\n\t[6]Sair do sistema\n");
        printf("\nInforme a opção:");
        scanf("%d",&op);
        switch(op){
    case 1:
        newinsert(&Inicio);
        break;
    case 2:
        Exibir(&Inicio);
        break;
    case 3:
        Search(&Inicio);
        break;
    case 4:
        Delete(&Inicio);
        break;
    case 5:
        printf("Em construção\n");
        system("pause");
        break;
        }

    }while(op!=6);
}

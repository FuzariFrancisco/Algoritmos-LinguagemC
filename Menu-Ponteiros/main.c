#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct no{
    int codigo;
    char nome[30];
    struct no * next;
}no;

 struct no *ptr, *A, *I, *conferir;

int main()
{
	setlocale(LC_ALL, "portuguese");
    system("color 6");
    int i, opcao, pessoas;
    ptr = NULL;
    A = NULL;    
        
    while(opcao != 3)
	{
		system("cls");
		printf("1 - Cadastrar\n");
		printf("2 - Exibir\n");
		printf("3 - Pesquisar por nome\n");
		printf("4 - Sair\n");
		printf("SELECIONE UMA OPÇÃO: "); scanf("%d", &opcao);
	
	
		switch(opcao)
		{
			case 1:
			{
				
				printf("Digite a quantidade de pessoas que deseja cadastrar: "); scanf("%d", &pessoas);
				
				for(i=0; i<pessoas; i++)
				{
		            printf("\tCadastro de num %d\n",i+1);
		            if(A == NULL){
		                ptr =(no*) malloc(sizeof(no));
		                printf("informe o Codigo. . ."); scanf("%d", &ptr ->codigo);
		                printf("informe o nome. . ."); scanf("%s", &ptr->nome);
		                A =ptr;
		                I = ptr;
		            }else{
		                ptr = (no*)malloc(sizeof(no));
		                printf("informe o codigo. . . "); scanf("%d", &ptr ->codigo);
		                printf("informe o nome. . . "); scanf("%s", &ptr->nome);
		
		                A->next = ptr;
		                ptr->next =NULL;
		                A=ptr;
		             }
		        }	
				break;
			}
			
			case 2:
			{
				
				ptr = I;
		    	do{
			        printf("\n\nCodigo %d\t", ptr->codigo);
			        printf("Nome %s", ptr->nome);
			        ptr=ptr->next;
		    	}while(ptr!=NULL);
		    	
				break;
			}
			
			case 3:
			{
				ptr = I;
				conferir =(no*) malloc(sizeof(no));
				printf("Digite o nome a ser pesquisado: "); scanf("%s", &conferir->nome);
				
		    	do{		
					if(strcmp(ptr->nome,conferir->nome) == 0)
					{					
					    printf("\n\nCodigo %d\t", ptr->codigo);
					    printf("Nome %s", ptr->nome);
					}
					ptr=ptr->next;
		    	}while(ptr!=NULL);
		    	
				break;
			}
			
			case 4:{
				
				default:
				break;
			}
    	}
    }
}

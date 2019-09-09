#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


typedef struct no{
    int codigo;
    char nome[30];
    struct no * next;
}no;

 struct no *ptr, *A, *I;

int main()
{
	setlocale(LC_ALL, "portuguese");
    system("color 6");
    int i, opcao, pessoas;
    ptr = NULL;
    A = NULL;

    while(opcao != 6)
	{
		system("cls");
		printf("1 - Cadastrar\n");
		printf("2 - Exibir\n");
		printf("3 - Pesquisar por nome\n");
		printf("4 - Deletar\n");
		printf("5 - Exibir em ordem alfabética\n");
		printf("6 - Sair\n");
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
                if(I == NULL){
                    printf("Ponteiro Vazio...");
                }else{
				ptr = I;
		    	do{
			        printf("\n\nCodigo %d\t", ptr->codigo);
			        printf("Nome %s\n\n", ptr->nome);
			        ptr=ptr->next;
		    	}while(ptr!=NULL);}
		    	system("pause");

				break;
			}

			case 3:
			{
			    if(I == NULL){
                    printf("Ponteiro Vazio...");
                }else{
				ptr = I;
				char conferir[30];
				printf("Digite o nome a ser pesquisado: "); scanf("%s", &conferir);

		    	do{
					if(strcmp(ptr->nome,conferir) == 0)
					{
					    printf("\n\nCodigo %d\t", ptr->codigo);
					    printf("Nome %s \n\n", ptr->nome);
					}
					ptr=ptr->next;
		    	}while(ptr!=NULL);}
                system("pause");
				break;
			}

			case 4:{
			    char conferir[30];
			    if(I == NULL){
                    printf("Ponteiro Vazio...");
                    system("pause");
                }else{
                ptr = I;
                int achou = 0;
				printf("Digite o nome a ser deletado: "); scanf("%s", &conferir);

				if(strcmp(ptr->nome,conferir) == 0){
                    I=ptr->next;
					free(ptr);
					printf("Removido Com Sucesso!");
                    system("pause");
                    achou = 1;
				}else{


		    	while(ptr!=NULL)
                {
					if(strcmp(A->nome,conferir) == 0)
					{
					    ptr->next = A->next;
					    free(A);

                        printf("Removido Com Sucesso!");
                        system("pause");
                        achou = 1;
					}
					A = ptr;
					ptr=ptr->next;

		    	}
		    	}}

				break;
			}

			case 5:{
                char alf[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','w','y','z'};
                char alfb[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','W','Y','Z'};
                char nomes[50][30] = {""};
                int i = 0, cont = 0, cont2 = 0;


                if(I == NULL){
                    printf("Ponteiro Vazio...");
                }else{
				ptr = I;
		    	do{
			        strcpy(nomes[i], ptr->nome);
			        fflush(stdin);

			        ptr=ptr->next;
			        i++;
		    	}while(ptr!=NULL);}


				
		    	for(cont = 0; cont < 26; cont++)
				{
					for(cont2 = 0; cont2 < 50; cont2++){
		                if(nomes[cont2][0] == alf[cont]|| nomes[cont2][0] == alfb[cont])
		                {
		                    printf("- %s\n", nomes[cont2]);
		                }
		            }
                }
                system("pause");





			}

			case 6:{

				default:
				break;
			}

    	}
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

typedef struct dados{
	int code;
    char nome[30];
    char sobrenome[20];
    int telefone;
    float salario;
}CLIENTE;

/*----------------------------------------------------------------------------------------------------------*/

int inserir(int code)
{
    char numstr[10];
    
    system("CLS");
    FILE *ponteiro;/* FILE -> Variável para acessar documentos */
    CLIENTE cliente;
    
    ponteiro = fopen("DadosCliente.txt", "ab");/* fopen("endereco do arquivo com tipo", " */
    
	if(ponteiro == NULL){
        printf("Erro na abertura do arquivo...dados\n");
        system("pause");
    }
	else{
			
			      
            system("CLS");
            printf("-----------------------------------\n");
            printf("------------ CADASTRAR -------------\n");
            printf("-----------------------------------\n");

			fflush(stdin);
			cliente.code = code;	
					
            fflush(stdin);
            printf("Digite o nome do Cliente:\n");
            gets(cliente.nome);

            fflush(stdin);
            printf("Digite o sobrenome do Cliente:\n");
            gets(cliente.sobrenome);

            fflush(stdin);
            printf("Digite o telefone do Cliente:\n");
            gets(numstr);
            cliente.telefone = atoi(numstr);/* atoi("numero em formato string") -> converte string para inteiro */

            fflush(stdin);
            printf("Digite o salario do Cliente:\n");
            gets(numstr);
            cliente.salario = atoi(numstr);/* atoi("numero em formato string") -> converte string para inteiro */
            
            printf("Seu codigo de pesquisa e: %d\n", code);
            system("pause");

            fwrite(&cliente, sizeof(CLIENTE), 1, ponteiro);
            
            fclose(ponteiro);

            system("cls");   	
        }
        
}

/*----------------------------------------------------------------------------------------------------------*/

void pesquisar()
{
    int achou = 0;

    system("CLS");
    printf("-----------------------------------\n");
    printf("------- PESQUISA POR CODIGO -------\n");
    printf("-----------------------------------\n");

    FILE *ponteiro;
    CLIENTE cliente;
    int codesearch;
    
    ponteiro = fopen("DadosCliente.txt", "rb");
    
    if(ponteiro == NULL){
        printf("Erro na abertura do arquivo...dados\n");
        system("pause");
    }else{
        fflush(stdin);
        printf("Digite o codigo a ser pesquisado.. \n");
    	scanf("%d", &codesearch);

        while(fread(&cliente, sizeof(CLIENTE), 1, ponteiro)){
            if(codesearch == cliente.code){
            	printf("\n---------------------------------------------------\n");
                printf("\n Nome........: %s\n", cliente.nome);
                printf("\n Sobrenome...: %s\n", cliente.sobrenome);
                printf("\n Telefone....: %d\n", cliente.telefone);
                printf("\n Salario.....: R$ %.2f\n", cliente.salario);
                printf("\n---------------------------------------------------\n");
                system("pause");
                achou = 1;
            }
        }
        if(achou == 0){
            printf("Registro nao encontrado... \n");
            system("pause");
        }
        
    }
    
}

/*----------------------------------------------------------------------------------------------------------*/

void exibirTodos()
{
    int achou = 0;

    system("CLS");
    printf("-----------------------------------\n");
    printf("--------- TODOS CADASTROS ---------\n");
    printf("-----------------------------------\n");

    FILE *ponteiro;
    CLIENTE cliente;
    
    ponteiro = fopen("DadosCliente.txt", "rb");
    
    if(ponteiro == NULL){
        printf("Erro na abertura do arquivo...dados\n");
        system("pause");
    }else{
        
        while(fread(&cliente, sizeof(CLIENTE), 1, ponteiro)){
            
            	printf("\n---------------------------------------------------\n");
                printf("\n Nome........: %s\n", cliente.nome);
                printf("\n Sobrenome...: %s\n", cliente.sobrenome);
                printf("\n Telefone....: %d\n", cliente.telefone);
                printf("\n Salario.....: R$ %.2f\n", cliente.salario);
                printf("\n---------------------------------------------------\n");
                achou = 1;
        }system("pause");
        
        if(achou == 0){
            printf("Registro nao encontrado... \n");
            system("pause");
        }    
    }    
}

/*----------------------------------------------------------------------------------------------------------*/


int inicializar()
{
	int achou = 0, code = 1;

    FILE *ponteiro;
    CLIENTE cliente;
    
    ponteiro = fopen("DadosCliente.txt", "rb");
    
    if(ponteiro != NULL){
    
       while(fread(&cliente, sizeof(CLIENTE), 1, ponteiro))
		{
			code++;
        }
    }
    return code;
}

/*----------------------------------------------------------------------------------------------------------*/




void main(int argc, char *argv[])
 {
 	int opcao, codeInicializar;
 	
	do
	{
		system("cls");
		codeInicializar = inicializar();
		printf("1 - CADASTRAR\n");
		printf("2 - PESQUISAR POR CODIGO\n");
		printf("3 - EXIBIR TODOS CADASTROS\n");
		printf("4 - SAIR\n\n");
		printf("SELECIONE A OPCAO DESEJADA: "); scanf("%d", &opcao);
		
		system("cls");
		
		switch(opcao)
		{
			case 1:
			{
				inserir(codeInicializar);
				break;
			}
			
			case 2:
			{
				pesquisar();
				break;
			}
			
			case 3:
			{
				exibirTodos();
				break;
			}
			
			case 4:
			{
				default:
				break;
			}
		}
		
		
	}while(opcao!= 4);
	
	
	

}

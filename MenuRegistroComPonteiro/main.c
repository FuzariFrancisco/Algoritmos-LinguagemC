#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>>

/* estrutura do cliente */
typedef struct dados{
    char nome[30];
    char sobrenome[20];
    int telefone;
    float salario;
}ALUNO;


void inserir()
{
	char resposta;
    char numstr[10];
    
    system("CLS");
    FILE *ponteiro;/* FILE -> Variável para acessar documentos */
    ALUNO francisco;
    
    ponteiro = fopen("dados.txt", "ab");/* fopen("endereco do arquivo com tipo", " */
    
	if(ponteiro == NULL){
        printf("Erro na abertura do arquivo...dados\n");
        system("pause");
    }
	else{
			do{
			      
            system("CLS");
            printf("-----------------------------------\n");
            printf("------------ CADASTRAR -------------\n");
            printf("-----------------------------------\n");

            fflush(stdin);
            printf("Digite o nome do Aluno:\n");
            gets(francisco.nome);

            fflush(stdin);
            printf("Digite o sobrenome do Aluno:\n");
            gets(francisco.sobrenome);

            fflush(stdin);
            printf("Digite o telefone do Aluno:\n");
            gets(numstr);
            francisco.telefone = atoi(numstr);/* atoi("numero em formato string") -> converte string para inteiro */

            fflush(stdin);
            printf("Digite o salario do Aluno:\n");
            gets(numstr);
            francisco.salario = atoi(numstr);/* atoi("numero em formato string") -> converte string para inteiro */

            fwrite(&francisco, sizeof(ALUNO), 1, ponteiro);
			printf("Deseja continuar [s][n] \n");
            scanf("%c", &resposta);
            system("cls");

        }while(resposta == 's');       
        	fclose(ponteiro);
        	system("cls");
        }
        
}

void pesquisar()
{
    int achou = 0;

    system("CLS");
    printf("-----------------------------------\n");
    printf("------------ PESQUISAR ------------\n");
    printf("-----------------------------------\n");

    FILE *ponteiro;
    ALUNO francisco;
    char nome[30];
    
    ponteiro = fopen("dados.txt", "rb");
    
    if(ponteiro == NULL){
        printf("Erro na abertura do arquivo...dados\n");
        system("pause");
    }else{
        fflush(stdin);
        printf("Digite o nome a ser pesquisado.. \n");
        gets(nome);

        while(fread(&francisco, sizeof(ALUNO), 1, ponteiro)){
            if(strcmp(nome, francisco.nome) == 0){
                printf("\n Nome........: %s\n", francisco.nome);
                printf("\n Sobrenome...: %s\n", francisco.sobrenome);
                printf("\n Telefone....: %d\n", francisco.telefone);
                printf("\n Salario.....: R$ %.2f\n", francisco.salario);
                achou = 1;
            }
        }
        if(achou == 0){
            printf("Registro nao encontrado... \n");
            system("pause");
        }
        
    }
    
}

void exibir()
{
	int achou = 0, contador=0;
	
	FILE *ponteiro;
    ALUNO francisco;
    char nome[30];
    
    ponteiro = fopen("dados.txt", "rb");
    
    if(ponteiro == NULL)
	{
        printf("Erro na abertura do arquivo...dados\n");
        system("pause");
    }
	else
	{
    
	    while(fread(&francisco, sizeof(ALUNO), 1, ponteiro))
		{
			if(contador==0 || contador == 10 || contador == 20 || contador == 30)
			{
				printf("************************************************\n");
				printf("*     FACULDADE DE TECNOLOGIA DE AMERICANA     *\n");
				printf("*              SISTEMA DE ARQUIVO              *\n");
				printf("*      ALUNO: FRANCISCO HENRIQUE DA SILVA      *\n");
				printf("************************************************\n");
				printf("    nome         sobrenome    telefone      salario\n");
			}
				printf("\n %10s     %10s   %7d          R$ %5.2f\n", francisco.nome, francisco.sobrenome, francisco.telefone, francisco.salario);
                achou = 1;
				contador++;		
		}
		if(achou == 0){
            printf("Registro nao encontrado... \n");
            system("pause");
        } 
	}
    
    
    
}

void main(){
	int opcao;
	setlocale(LC_ALL, "portuguese");
	do
	{
		printf("\n\n--------------------------\n");
		printf("------MENU DE OPÇÕES------\n");
		printf("--------------------------\n\n");
		
		printf("1 - CADASTRAR ALUNO\n");
		printf("2 - PESQUISAR CADASTRO\n");
		printf("3 - EXIBIR RELATÓRIO\n");
		printf("SELECIONE A OPÇÃO DESEJADA");scanf("%d", &opcao);
		
		system("cls");
		
		switch(opcao)
		{
			case 1:{
				
				inserir();
				break;
				system("cls");
			}
			
			case 2:{
				pesquisar();
				break;
				system("cls");
			}
			
			case 3:{
				exibir();
				break;
				system("cls");
			}
			
			case 4:{
				default:
				break;
				system("cls");
			}
		}
		
		
	}while(opcao != 4);
}

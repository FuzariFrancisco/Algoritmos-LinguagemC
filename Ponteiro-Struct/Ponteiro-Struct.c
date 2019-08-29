#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


/* estrutura do cliente */
typedef struct dados{
    char nome[30];
    char sobrenome[20];
    char endereco[30];
    char status;
    int rg;
    int telefone;
    float salario;
}CLIENTE;

void inserir(){
    char numstr[10];
    char resp;
    system("CLS");
    FILE *ponteiro;/* FILE -> Variável para acessar documentos */
    CLIENTE toni;
    ponteiro = fopen("dados.txt", "ab");/* fopen("endereco do arquivo com tipo", " */
    if(ponteiro == NULL){
        printf("Erro na abertura do arquivo...dados\n");
        system("pause");
    }else{
        do{

            system("CLS");
            printf("-----------------------------------\n");
            printf("------*** FATEC Americana ***------\n");
            printf("------------ CADASTRO -------------\n");
            printf("-----------------------------------\n");

            fflush(stdin);
            printf("Digite o nome do Cliente:\n");
            gets(toni.nome);

            fflush(stdin);
            printf("Digite o sobrenome do Cliente:\n");
            gets(toni.sobrenome);

            fflush(stdin);
            printf("Digite o endereco do Cliente:\n");
            gets(toni.endereco);

            fflush(stdin);
            printf("Digite o RG do Cliente:\n");
            gets(numstr);
            toni.rg = atoi(numstr);/* atoi("numero em formato string") -> converte string para inteiro */

            fflush(stdin);
            printf("Digite o telefone do Cliente:\n");
            gets(numstr);
            toni.telefone = atoi(numstr);/* atoi("numero em formato string") -> converte string para inteiro */

            fflush(stdin);
            printf("Digite o salario do Cliente:\n");
            gets(numstr);
            toni.salario = atoi(numstr);/* atoi("numero em formato string") -> converte string para inteiro */

            fwrite(&toni, sizeof(CLIENTE), 1, ponteiro);
            printf("Deseja continuar [s][n] \n");
            scanf("%c", &resp);

        }while(getch() == 's');
        fclose(ponteiro);
    }
}

void pesquisar(){
    int achou = 0;

    system("CLS");
    printf("-----------------------------------\n");
    printf("------*** FATEC Americana ***------\n");
    printf("------------ CADASTRO -------------\n");
    printf("-----------------------------------\n");

    FILE *ponteiro;
    CLIENTE toni;
    char nome[30];
    ponteiro = fopen("dados.txt", "rb");
    if(ponteiro == NULL){
        printf("Erro na abertura do arquivo...dados\n");
        system("pause");
    }else{
        fflush(stdin);
        printf("Digite o nome a ser pesquisado.. \n");
        gets(nome);

        while(fread(&toni, sizeof(CLIENTE), 1, ponteiro)){
            if(strcmp(nome, toni.nome) == 0){
                printf("\n Nome........: %s\n", toni.nome);
                printf("\n Sobrenome...: %s\n", toni.sobrenome);
                printf("\n Endereco....: %s\n", toni.endereco);
                printf("\n Telefone....: %d\n", toni.telefone);
                printf("\n RG..........: %d\n", toni.rg);
                printf("\n Salario.....: R$ %.2f\n", toni.salario);
                achou = 1;
            }
        }
        if(achou == 0){
            printf("Registro nao encontrado... \n");
            system("pause");
        }
    }
}

void main(){
    pesquisar();
}

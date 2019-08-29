#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    int opcao,enter,i,j,tamanho;
    int vogais=0,consoantes=0,espacos=0,especiais=0;
    char texto[30];
    setlocale(LC_ALL, "portuguese");
    while(opcao != 3)
        {
            printf("\t 1 - Digitar um frase de até 30 caracteres.\n");
            printf("\t 2 - Exibir detalhes da frase.\n");
            printf("\t 3 - Sair.\n\n");
            printf("\t\t SELECIONE A OPÇÃO DESEJADA..\n\n"); scanf("%d", &opcao);

            switch(opcao)
            {
            case 1:
                {
                    printf("Digite sua frase (até 30 caracteres): "); scanf(" %[^\n]s", texto);
                    printf("Frase Digitada: %s \n\n\n", texto);
                    tamanho = strlen(texto);
                    while(enter != 13)
                    {
                        printf("\n\n PRESSIONE ENTER PARA CONTINUAR..."); enter = getch();
                    }
                    system("cls");
                    enter = 0;
                    break;
                }
            case 2:
                {
                    vogais=0;
                    for(i=0; i<tamanho; i++)
                    {
                        if(texto[i] == 97) {vogais++;}
                        else if (texto[i] == 65) {vogais++;}
                        else if (texto[i] == 69) {vogais++;}
                        else if(texto[i] == 101) {vogais++;}
                        else if(texto[i] == 73) {vogais++;}
                        else if(texto[i] == 105) {vogais++;}
                        else if(texto[i] == 79) {vogais++;}
                        else if(texto[i] == 111) {vogais++;}
                        else if(texto[i] == 85) {vogais++;}
                        else if(texto[i] == 117) {vogais++;}
                        else if(texto[i] == ' ') {espacos++;}
                        for(j=66; j<69; j++)
                            {if (texto[i] == j) {consoantes++;}}
                        for(j=70; j<73; j++)
                            {if (texto[i] == j) {consoantes++;}}
                        for(j=74; j<79; j++)
                            {if (texto[i] == j) {consoantes++;}}
                        for(j=80; j<85; j++)
                            {if (texto[i] == j) {consoantes++;}}
                        for(j=86; j<91; j++)
                            {if (texto[i] == j) {consoantes++;}}
                        for(j=98; j<101; j++)
                            {if (texto[i] == j) {consoantes++;}}
                        for(j=102; j<105; j++)
                            {if (texto[i] == j) {consoantes++;}}
                        for(j=106; j<111; j++)
                            {if (texto[i] == j) {consoantes++;}}
                        for(j=112; j<117; j++)
                            {if (texto[i] == j) {consoantes++;}}
                        for(j=118; j<123; j++)
                            {if (texto[i] == j) {consoantes++;}}
                        for(j=33; j<65; j++)
                            {if (texto[i] == j) {especiais++;}}
                        for(j=91; j<97; j++)
                            {if (texto[i] == j) {especiais++;}}
                        for(j=123; j<255; j++)
                            {if (texto[i] == j) {especiais++;}}


                    }
                    printf("Frase Digitada: %s\n", texto);
                    printf("vogais: %d \n", vogais);
                    printf("espaços: %d \n", espacos);
                    printf("consoantes: %d \n", consoantes);
                    printf("Carateres Especiais: %d\n", especiais);

                    while(enter != 13)
                    {
                        printf("\n\n PRESSIONE ENTER PARA CONTINUAR..."); enter = getch();
                    }
                    system("cls");
                    enter=0;
                    break;
                }
            case 3:
                {
                    printf("Você escolheu sair...\n\n");
                    break;
            default:
                system("cls");
                }
            }
     }
    return 0;
}

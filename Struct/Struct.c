#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
        system("Color A");
        setlocale(LC_ALL, "");
        struct CAD_ALUNO
    {
        char nome[40];
        float nota1;
        float nota2;
    };
        struct CAD_ALUNO ALUNO;

        float media;
        media = 0;
        printf("\n Cadastro de Alunos");
        printf("\n Informe o nome do aluno ");
        fflush(stdin);
        fgets(ALUNO.nome,40,stdin);

        printf("\n Informe a PRIMEIRA nota do aluno ");
        scanf("%f", &ALUNO.nota1);
        printf("\n Informe a SEGUNDA nota do aluno ");
        scanf("%f", &ALUNO.nota2);
        printf("\n\n");
        printf(" O nome do aluno ..: %s ", ALUNO.nome);
        media =(ALUNO.nota1 + ALUNO.nota2)/2;
        printf(" A média do aluno citado acima é de %.2f", media);

}

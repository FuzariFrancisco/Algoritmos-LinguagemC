#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int idade, dias, horas, minutos;
    printf("Calcule quantos dias e horas a pessoa viveu\n\n");
    printf("\n\tDigite sua idade: ");
    scanf("%d", &idade);
    dias = idade * 365;
    horas = dias * 24;
    minutos = horas * 60;

    printf("\nVocê viveu %d dias.",dias);
    printf("\nVocê viveu %d horas.",horas);
    printf("\nVocê viveu %d minutos.",minutos);

    printf("\nVocê possui %d anos.\n\n\n", idade);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que calcule os dois últimos digitos do cpf*/

int main(int argc, char *argv[]) {
	
	char numeros[9];
	int cpf1[9], cpf2[10], cpf3[11];
	int i=0, j=0, parcial=0, resto=0, resultado=0, dig1, dig2;
	
	printf("Digite os 9 primeiros numeros do seu cpf: "); gets(numeros);
	
	for(i=0; i<9; i++)
	{
		cpf1[i] = numeros[i] - '0';
	}
	
	j=10;
	for(i=0; i<9; i++)
	{
		parcial += cpf1[i] * j;
		j--;
	}
	
	resto = parcial % 11;
	resultado = 11 - resto;
	
	if(resultado > 9)
	{
		dig1 = 0;
	}else
	{
		dig1 = resultado;
	}

	for(i=0; i<9; i++)
	{
		cpf2[i] = cpf1[i];
	}
	cpf2[9] = dig1;
	
	parcial=0; resultado =0; resto=0;
	j=11;
	for(i=0; i<10; i++)
	{
		parcial += cpf2[i] * j;
		j--;
	} 
	
	resto = parcial % 11;
	resultado = 11 - resto;
	
	if(resultado > 9)
	{
		dig2 = 0;
	}else
	{
		dig2 = resultado;
	}
	
	for(i=0; i<10; i++)
	{
		cpf3[i] = cpf2[i];
	}
	cpf3[10] = dig2;
	
	system("cls");
	for(i=0; i<11; i++)
	{
		printf("%d", cpf3[i]);
	}
	return 0;
}

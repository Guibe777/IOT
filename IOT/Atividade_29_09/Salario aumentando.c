#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float salario = 1000, aumento = 1.5;
	int ano = 2020, atual;
	
	printf("Digite o ano atual: ");
	scanf("%d*c", &atual);
	
	while (ano < atual){	
		salario += salario * (aumento/100);
		aumento = aumento * 2;	
		ano = ano + 1;
}
	printf("Salario atual = %.2f", salario);
}
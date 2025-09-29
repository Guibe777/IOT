#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	// Variáveis
	int ntop, n1, n2, n3, n4;
	
	// Mensagens pedindo os valores
	printf("Digite o primeiro numero inteiro: \n");
	scanf("%d%*c", &n1);
	printf("Digite o segundo numero inteiro: \n");
	scanf("%d%*c", &n2);
	printf("Digite o terceiro numero inteiro: \n");
	scanf("%d%*c", &n3);
	printf("Digite o quarto numero inteiro: \n");
	scanf("%d%*c", &n4);
	
	// Soma dos números
	ntop = n1 + n2 + n3 + n4;
	
	// Mostrando os valores
	printf("A soma dos 4 numeros digitados e de: %d%", ntop);
}
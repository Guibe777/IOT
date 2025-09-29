#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	// Variáveis
	float dep, taxa, rend, tot;
	
	// Pedindo o valor do depósito
	printf("Digite o valor do deposito: R$ ");
	scanf("%f%*c", &dep);
	// Pedindo a taxa de juros
	printf("Digite a taxa de juros em porcentagem: ");
	scanf("%f%*c", &taxa);
	// Cálculo do rendimento
	rend = dep * (taxa/100);
	tot = dep + rend;
	// Mostrando os valores
	printf("Valor do rendimento R$ %0.2f%\n", rend);
	printf("Valor total com o rendimento R$ %0.2f%\n", tot);
}
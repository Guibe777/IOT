#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	// Variáveis
	float sal, aum;
	// Mensagem antes da leitura do salário
	printf("Digite o salário de um funcionário: ");
	// Recebe o salário
	scanf("%f%*c", &sal);
	
	// Calculando o novo salário
	aum = sal*1.25;
	
	// Exibindo os resultados
	printf("O novo salário é de: R$ %0.2f%", aum);
}
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	// Variáveis
	float sal, sal_final, grat, imp;
	
	// Mensagem pedindo o salário
	printf("Blud digita o salario do funcionario: ");
	scanf("%f%*c", &sal);
	
	// Cálculo da gratificação e imposto
	grat = (sal * 0.05);
	imp = (sal* 0.07);
	// Salário a receber
	sal_final = sal + grat - imp;
	
	// Mensagens com os resultados
	printf("O valor da gratificacao e de R$ %0.2f%\n", grat);
	printf("O valor do imposto e de R$ %0.2f%\n", imp);
	printf("O salario a receber do funcionario e de: %0.2f%", sal_final);
	
}
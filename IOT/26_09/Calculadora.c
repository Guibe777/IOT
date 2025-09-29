#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char op;
	float num1, num2;
	
	printf("Digite um numero, escolha um operador e digite outro numero \n");
	scanf("%f %c %f", &num1, &op, &num2);
	
	switch(op)
	{
		case '+':
			printf(" = %.2f", num1 + num2);
			break;
			
		case '-':
			printf(" = %.2f", num1 - num2);
			break;
			
		case '*':
			printf(" = %.2f", num1 * num2);
			break;
			
		case '/':
			if(num2 == 0)
				printf("O numero nao pode ser dividido por 0");
				break;
			printf(" = %.2f", num1 / num2);
			break;
			
		default:
			printf("Operador Invalido!");
	}
}
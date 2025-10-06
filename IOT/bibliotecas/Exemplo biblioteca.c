#include <stdio.h>
#include <locale.h>
#include "C:\Users\guilherme_nascime150\Documents\GitHub\IOT\IOT\bibliotecas\rotinas.h"
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int num1, num2, res;
		sub_rotina1();
		sub_rotina2();
	printf("Digite um numero: ");
	scanf("%d*c", &num1);
	printf("Digite outro numero: ");
	scanf("%d*c", &num2);
	res = sub_rotina3(num1, num2);
	printf("Resultado = %d",res);
getchar();
return 0;
}
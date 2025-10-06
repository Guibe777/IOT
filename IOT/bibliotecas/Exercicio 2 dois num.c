#include <stdio.h>
#include <locale.h>
#include "C:\Users\guilherme_nascime150\Documents\GitHub\IOT\IOT\bibliotecas\Lista09.1_Guilherme_do_Nascimento\rotinas.h"
int main()
{
	setlocale(LC_ALL,"Portuguese");
		dois_num();
	printf("Digite um numero positivo: ");
	scanf("%d", &x);
	
	printf("Digite outro numero positivo: ");
	scanf("%d", &y);
	
	getchar();
	return 0;
}
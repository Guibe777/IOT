#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2;
	
	printf("Digite dois numeros \n");
	scanf("%f %f", &n1, &n2);
	
	printf("Os numeros na ordem em que foram inseridos: %0.2f, %0.2f", n1, n2);
}
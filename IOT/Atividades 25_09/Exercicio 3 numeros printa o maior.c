#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3;
	
	printf("Digite tres numeros \n");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	if (n1 > n2 && n1 > n3)
		printf("O maior numero e: %0.2f", n1);
		
	else if (n2 > n1 && n2 > n3)
		printf("O maior numero e: %0.2f", n2);
		   
	else
		printf("O maior numero e: %0.2f", n3);
}
		
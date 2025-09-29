#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite sua idade\n");
	scanf("%d", &idade);
	if(idade < 0)
		printf("Para de besteirinha");
	else if(idade <= 11)
		printf("Voce e uma kid");
	else if(idade >= 12 && idade <= 18)
		printf("Voce e aborrecente");
	else if(idade >= 19 && idade <= 24)
		printf("Voce e jovem");
	else if(idade >= 25 && idade <= 59)
		printf("Voce e adulto");
	else
		printf("Idoso");
}
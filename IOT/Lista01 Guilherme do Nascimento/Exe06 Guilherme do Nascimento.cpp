#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	// Variáveis
	float nota1, nota2, nota3, media;
	int peso1, peso2, peso3;
	
	// Pedindo os valores da primeira nota
	printf("Digite a primeira nota: ");
	scanf("%f%*c", &nota1);
	printf("Digite o peso da primeira nota: ");
	scanf("%d%*c", &peso1);
	
	// Pedindo os valores da segunda nota
	printf("Digite a segunda nota: ");
	scanf("%f%*c", &nota2);
	printf("Digite o peso da primeira nota: ");
	scanf("%d%*c", &peso2);
	
	// Pedindo os valores da terceira nota
	printf("Digite a terceira nota: ");
	scanf("%f%*c", &nota3);
	printf("Digite o peso da primeira nota: ");
	scanf("%d%*c", &peso3);
	
	// Cálculo da média
	media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
	
	printf("Media Ponderada: %0.2f%", media);
}
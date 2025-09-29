#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	// Variáveis
	float nota1, nota2, nota3, media;
	
	// Mensagens pedindo as notas
	printf("Digite o a primeira nota: \n");
	scanf("%f%*c", &nota1);
	printf("Digite o a segunda nota: \n");
	scanf("%f%*c", &nota2);
	printf("Digite o a terceira nota: \n");
	scanf("%f%*c", &nota3);
	
	// Calculando a média
	media = (nota1 + nota2 + nota3) / 3;
	
	// Mensagem mostrando o valor da média
	printf("A media das 3 notas e de: %0.2f%", media);
}
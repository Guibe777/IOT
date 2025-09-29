#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
    // Variáveis
	float pes, jardas, milhas, polegadas;
	
	// Mensagem pedindo o valor em pés
	printf("Digite quantos pes voce quer converter para Polegadas, Jardas e Milhas: ");
	scanf("%f%*c", &pes);
	
	// Conversões
	polegadas = pes * 12;
	jardas = pes / 3;
	milhas = jardas / 1760;
	
	// Mostrando os valores
	printf("Pes %0.2f%: \n" ,pes);
	printf("Polegadas %0.2f%: \n" ,polegadas);
	printf("Jardas %0.2f%: \n" ,jardas);
	printf("Milhas %0.2f%: \n" ,milhas);
}
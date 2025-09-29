#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i, cod, veic, acid, maior_ind, menor_ind;
	float media, mediamenos;
	
	for (i = 1; i <=5; i++)
	{
		printf("Digite o codigo da %d cidade: ", i);
		scanf("%d", &cod);
		
		printf("Digite a quantia de veiculos de passeio: ");
		scanf("%d", &veic);
		
		// Calculo de media de veiculos nas 5 cidades
		media = media + veic;
		
		printf("Digite a quantia de acidentes de transito com vitimas: ");
		scanf("%d", &acid);
		
		// Indice de maior acidente
		maior_ind = acid;
		if(acid > maior_ind)
			maior_ind = acid;
		
		// Indice menor acidente
		menor_ind = acid;
		if(acid < menor_ind)
			menor_ind = acid;
		
		// Média de acidentes em cidades com menos de 2000 veículos de passeio
		if(veic < 2000){
			mediamenos = mediamenos + acid;
	}
	
		// Apaga as mensagens anteriores
		system("cls");
	}
	
		printf("Maior indice de acidentes: %d Cidade (%d)\n\n", maior_ind, cod);
		printf("Menor indice de acidentes: %d Cidade (%d)\n\n", menor_ind, cod);
		printf("Media de veiculos em cidades com menos de 2000 veiculos: %.2f\n\n", mediamenos);
		printf("Media de veiculos: %.2f", media / 5);
}
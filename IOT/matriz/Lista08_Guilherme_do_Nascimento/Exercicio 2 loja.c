#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char loja[8][40], prod[4][40];
	float preco[8][4];
	int i, j;
	
	for(int i = 0; i < 8; i++){
		printf("Digite o nome da %d loja: ", i+1);
		scanf("%s", &loja[i]);
	}
	
	for(int j = 0; j < 4; j++){
		printf("Digite o nome do %d produto: ", j+1);
		scanf("%s", &prod[j]);
	}
	
	for(i = 0; i < 8; i++){
		printf("\nLoja: %s\n", &loja[i]);
		for(j = 0; j < 4; j++){
			printf("Digite o preco do produto %s: ", prod[j]);
			scanf("%f", &preco[i][j]);
		}
	}
	
	for(i = 0; i < 8; i++){
		for(j = 0; j < 4; j++){
			if(preco[i][j] <= 60){
				printf("\n Produto: %s / Loja: %s / Preco: %.2f \n", prod[j], loja[i], preco[i][j]);
			}
		}
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char carro[50];
	float consumo[6], maior_consumo, menor_consumo;
	int i;
	
	for(i = 1; i < 6; i++){
		printf("Digite o modelo do %d carro : ", i);
        scanf("%s", &carro[i]);
        
        printf("Digite o consumo do carro %d: ", i);
        scanf("%f", &consumo[i]);
    }
    
    maior_consumo = menor_consumo = consumo[0];
	
	for(i = 1; i < 6; i++){
        if(consumo[i] > maior_consumo) {
            maior_consumo = consumo[i];
        }
        
        if(consumo[i] < menor_consumo) {
            menor_consumo = consumo[i];
        }    
    }
    
    printf("Carro com menor consumo: %s consumo: %.2f \n", menor_consumo);
    printf("Carro com maior consumo: %s consumo: %.2f \n", maior_consumo);
    
    return 0;
}
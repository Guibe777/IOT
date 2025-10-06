#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int primo[9], divisores, y, i;
	
	for(i = 0; i < 9; i++){
		printf("Digite o %d numero: \n", i+1);
		scanf("%d", &primo[i]);
		printf("\n");
		divisores = 0;
		
		for(y = 1; y <= primo[i]; y++){
			if(primo[i] % y == 0){
				divisores++;
			}
		}
		if(divisores == 2){
			printf("O numero %d da %d posicao e primo\n\n", primo[i],i);
		}
	}
}
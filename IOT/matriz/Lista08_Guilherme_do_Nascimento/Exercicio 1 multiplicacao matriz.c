#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[2][2], i, j, maior_numero = 0, ele;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Digite os elementos da linha %d coluna %d: ",i+1,j+1);
			scanf("%d", &ele);
			matriz[i][j] = ele;
			if(maior_numero < ele){
				maior_numero = ele;
			}
		}
	}
	printf("Resultado da matriz:");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf(" [%d] ",matriz[i][j] * maior_numero);
		}
	}
	return 0;
}
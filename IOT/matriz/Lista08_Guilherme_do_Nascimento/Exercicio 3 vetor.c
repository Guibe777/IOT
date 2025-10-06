#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[18], mat[3][6], q=1;
	
	for(int i = 0; i < 18; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &vetor[i]);
	}
	
	for(int i = 0; i < 3; i++){
		for(int l = 0; l < 3; l++){
			for(int j = 0; j < 6; j++){
				mat[l][j] = vetor[i];
				i++;
				printf("[%d]", mat[l][j]);
				if(q % 6 == 0){
					printf("\n");
				}
				q++;
			}
		}
	}
	
}
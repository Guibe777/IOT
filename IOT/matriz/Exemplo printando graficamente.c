#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, X[3][4];
	
	for(i = 0; i < 3; i++){
			printf("Elementos da linha %d", i);
			for(j = 0; j < 4; j++){
				printf(" [%d] |", X[i,j]);
			}
		printf("\n");
	}
}
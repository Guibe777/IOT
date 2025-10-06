#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, X[10][6];
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 6; j++){
			printf("[%d] X [%d]\n", X[i], X[j]);
		}
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int numero[10], i, maior[10], posicao[10];
	
	for(i=0; i < 10; i++){
		printf("Digite um numero inteiro: \n");
		scanf("%d", &numero[i]);
		
		if(numero[i] > 50 ){
			printf("O numero %d na posicao %d e maior que 50 uhuu\n\n", numero[i], i+1);
		}
		else if(numero[i] == 50){
			printf("O numero %d na posicao %d e igual a 50 aaaa\n\n", numero[i], i+1);
		}
		else{
			printf("O numero %d na posicao %d e menor que 50 :(\n\n", numero[i], i+1);
		}
	}
}
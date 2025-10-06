#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	
	float sal = 545, acrescimo = 5, tot_vendas, valor_uni[10], valor_tot, mais_vendido;
	int quant_vendida[10], i, j, posicao;
	
	for(i = 0; i < 10; i++){
		printf("Digite o valor unitario do %d objeto: ", i+1);
		scanf("%f", &valor_uni[i]);
		
		printf("Digite a quantidade vendida do %d objeto: ", i+1);
		scanf("%d", &quant_vendida[i]);
		
		tot_vendas += valor_uni[i] * quant_vendida[i];
		
		mais_vendido == quant_vendida[0];
		if(quant_vendida[i] >= mais_vendido){
			mais_vendido = quant_vendida[i];
			posicao = i+1;
		}
	}
	
	sal += tot_vendas * 0.05;
	
	system("cls");
	
	printf("-----Relatorio Muito Daora-----\n\n");
	for(i = 0; i < 10; i++){
		printf("Valor unitario da %d peca: %.2f\n",i+1, valor_uni[i]);
		printf("Quantidade vendida da %d peca: %d\n",i+1, quant_vendida[i]);
		printf("Valor total da %d peca: %.2f\n\n",i+1, valor_tot = valor_uni[i] * quant_vendida[i]);
	}
	printf("Valor total das vendas: %.2f\n", tot_vendas);
	printf("Salario que o vendedor recebera: %.2f\n", sal);
	printf("Valor do objeto mais vendido: %.2f, sua posicao e: %d\n\n",mais_vendido, posicao);
	
	return 0;
}
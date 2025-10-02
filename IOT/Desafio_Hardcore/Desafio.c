#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int prod, custo_estocagem, barato, normal, caro;
	float p_uni, imposto, p_final, custo_estocagem_total, imposto_total, media_ce, media_imp;
	char R, C;
	
	prod = 1;

	while(prod <= 12 ){
		printf("Digite o preco unitario do %d produto: \n", prod);
		scanf("%f", &p_uni);
	
		printf("O produto precisa de refrigeracao (S para sim e N para nao): \n");
		scanf(" %c", &R);
	
		printf("Qual a categoria do produto \n(A - Alimenticio)\n(L - Limpeza)\n(V - Vestuario)\n");
		scanf(" %c", &C);
		
			
			
		// Preço de estocagem
		// -----------------------------------------------------/
		// Até R$20
		if(p_uni <= 20 && C == 'A') {
			custo_estocagem = 2;	
		}
	
		else if(p_uni <= 20 && C == 'L') {
			custo_estocagem = 3;
		}
	
		else if(p_uni <= 20 && C == 'V') {
			custo_estocagem = 4;
		}
	
		// -----------------------------------------------------/
		// Entre R$20 e R$50
		if(p_uni > 20 && p_uni <= 50 && R == 'S') {
			custo_estocagem = 6;
		}
	
		else if(p_uni > 20 && p_uni <= 50 && R == 'N') {
			custo_estocagem = 0;
		}
	
		// -----------------------------------------------------/
		// Maior que R$50
		if(p_uni > 50 && R == 'S' && C == 'A') {
			custo_estocagem = 5;
		}
	
		else if(p_uni > 50 && R == 'S' && C == 'L') {
			custo_estocagem = 2;
		}
	
		else if(p_uni > 50 && R == 'S' && C == 'V') {
			custo_estocagem = 4;
		}
	
		else if(p_uni > 50 && R == 'N' && C == 'A' || C == 'V') {
			custo_estocagem = 0;
		}
	
		else if(p_uni > 50 && R == 'S' && C == 'L') {
			custo_estocagem = 1;
		}
	
	
	
		// Cálculo de imposto
		// -----------------------------------------------------/
		if(R == 'S' && C == 'A'){
			imposto = p_uni * 0.04;
		}
		else {
			imposto = p_uni * 0.02;
		}
			
			
		
		// Cálculo de Valores Adicionais
		// -----------------------------------------------------/
		imposto_total += imposto;
		custo_estocagem_total += custo_estocagem;
		
		
		
		// Cálculo do Preço Final -- Barato / Normal / Caro
		// -----------------------------------------------------/
		if(p_uni + custo_estocagem + imposto < 20){
			barato += 1;
		}
		
		else if(p_uni + custo_estocagem + imposto >= 20 && p_uni + custo_estocagem + imposto <= 100){
			normal += 1;
		}
		
		else{
			caro += 1;
		}
		
		
		
		prod += 1;
		
		// Apaga as mensagens anteriores
		system("cls");
	}
	
		// Cálculo Média Valores Adicionais
		// -----------------------------------------------------/
		media_ce = custo_estocagem_total / 12;
		media_imp = imposto_total / 12;
		
		printf("Media dos custos de estocagem: %.2f", media_ce);
		printf("Media dos impostos: %.2f", media_imp);
		printf("Total dos impostos: %.2f", imposto_total);
		printf("Quantidade de produtos com classificacao 'Barato': %d", barato);
		printf("Quantidade de produtos com classificacao 'Normal': %d", normal);
		printf("Quantidade de produtos com classificacao 'Caro': %d", caro);
}
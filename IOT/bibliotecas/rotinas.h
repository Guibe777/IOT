#include <stdio.h>
#include <string.h>
#include <locale.h>
void sub_rotina1()
{
	printf("mostrando uma mensagem");
}

void sub_rotina2()
{
	int a,b,c;
	printf("Digite o valor de a: ");
	scanf("%d*c", &a);
	printf("Digite o valor de b: ");
	scanf("%d*c", &b);
	c = a - b;
	printf("Resultado = %d", c);
}

int sub_rotina3(int x, int y)
{
	int res;
	res = x * y;
	return res;
}

// Da atividade
void neg_pos()
{
	int x;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	if(x >= 0){
		x = 1;
	}
	else if(x < 0){
		x = 0;
	}
	
	printf("%d", x);

}

int dois_num(int x, int y, int soma)
{	
	if(y > x){
		soma = 0;
	}
	else{
		while(x > y){
			y += 1;
			soma += y;
		}
		printf("O resultado da soma dos numeros entre %d e %d e: %d",x,y,soma);
	}
	return dois_num(x, y, soma);
}
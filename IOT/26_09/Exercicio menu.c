#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int opcao;
	float sal;
	
	printf("Menu de opcoes: \n 1) Imposto \n 2) Novo Salario \n 3) Classificacao \n Digite a opcao desejada: \n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			
			// Apaga as mensagens anteriores
			system("cls");
			
			printf("Digite o salario do funcionario: ");
			scanf("%f", &sal);
			
			if(sal < 500)
				printf("Valor do imposto: R$ %0.2f", sal * 0.05);
			
			else if(sal >= 500 && sal <= 850)
				printf("Valor do imposto: R$ %0.2f", sal * 0.1);
				
			else
				printf("Valor do imposto: R$ %0.2f", sal * 0.15);
		break;
		
		case 2:
			
			// Apaga as mensagens anteriores
			system("cls");
			
			printf("Digite o salario do funcionario: ");
			scanf("%f", &sal);
			
			if(sal > 1500)
				printf("Novo salario: R$ %0.2f", sal + 25);
				
			else if(sal >= 750 && sal <= 1500)
				printf("Novo salario: R$ %0.2f", sal + 50);
				
			else if(sal >= 450 && sal <= 749)
				printf("Novo salario: R$ %0.2f", sal + 75);
				
			else
				printf("Novo salario: R$ %0.2f", sal + 100);
			break;
				
		case 3:
			
			// Apaga as mensagens anteriores
			system("cls");
			
			printf("Digite o salario do funcionario: ");
			scanf("%f", &sal);
			
			if(sal <= 700)
				printf("Mal remunerado");
			else
				printf("Bem remunerado");
			break;
	}
}
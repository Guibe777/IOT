#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int dia, mes;
	
	printf("Digite o dia e mes do seu aniversario (Exemplo, se for 15 de fevereiro: 15 02) \n");
	scanf("%d %d", &dia, &mes);
	
	switch(mes)
	{
		case 1:
			if(dia <= 0 || dia > 31)
				printf("Dia invalido");
				break;
				if(dia >= 20)
					printf("Aquario");
				else
					printf("Capricornio");
				break;
			
		case 2:
			if(dia <= 0 || dia > 29)
				printf("Dia invalido");
				break;
				if(dia <= 18)
					printf("Aquario");
				else
					printf("Peixes");
				break;
			
		case 3:
			if(dia <= 0 || dia > 31)
				printf("Dia invalido");
				break;
				if(dia <= 20)
					printf("Peixes");
				else
					printf("Aries");
				break;
			
		case 4:
			if(dia <= 0 || dia > 30)
				printf("Dia invalido");
				break;
				if(dia <= 19)
					printf("Aries");
				else
					printf("Touro");
				break;
			
		case 5:
			if(dia <= 0 || dia > 31)
				printf("Dia invalido");
				break;
				if(dia <= 20)
					printf("Touro");
				else
					printf("Gemeos");
				break;
			
		case 6:
			if(dia <= 0 || dia > 30)
				printf("Dia invalido");
				break;
				if(dia <= 21)
					printf("Gemeos");
				else
					printf("Cancer");
				break;
			
		case 7:
			if(dia <= 0 || dia > 31)
				printf("Dia invalido");
				break;
				if(dia <= 22)
					printf("Cancer");
				else
					printf("Leao");
				break;
		
		case 8:
			if(dia <= 0 || dia > 31)
				printf("Dia invalido");
				break;
				if(dia <= 22)
					printf("Leao");
				else
					printf("Virgem");
				break;
			
		case 9:
			if(dia <= 0 || dia > 30)
				printf("Dia invalido");
				break;
				if(dia <= 22)
					printf("Virgem");
				else
					printf("Libra");
				break;
			
		case 10:
			if(dia <= 0 || dia > 31)
				printf("Dia invalido");
				break;
				if(dia <= 22)
					printf("Libra");
				else
					printf("Escorpiao");
				break;
			
		case 11:
			if(dia <= 0 || dia > 30)
				printf("Dia invalido");
				break;
				if(dia <= 21)
					printf("Escorpiao");
				else
					printf("Sagitario");
				break;
			
		case 12:
			if(dia <= 0 || dia > 31)
				printf("Dia invalido");
				break;
				if(dia <= 21)
					printf("Sagitario");
				else
					printf("Capricornio");
				break;
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int aluno, aprov, reprov, exame;
	float nota1, nota2, media;

	aluno = 1;
	reprov = 0;
	exame = 0;
	aprov = 0;
	
	while (aluno <= 6){
		printf("Digite as duas notas do %d aluno: \n", aluno);
		scanf("%f%f",&nota1,&nota2);
		
		printf("Media do %d aluno: %.2f \n",aluno, media = (nota1 + nota2) / 2);
		
		if (media < 3){
			printf("Status: Reprovado \n\n");
			reprov = reprov + 1;
		}
		
		else if (media > 3 && media < 7) {
			printf("Status: Exame \n\n");
			exame = exame + 1;
		}
		
		else{
			printf("Status: Aprovado \n\n");
			aprov = aprov + 1;
		}
		
		aluno += 1;
	}
	
	printf("Quantidade de alunos reprovados: %d\n", reprov);	
	printf("Quantidade de alunos em exame: %d\n", exame);	
	printf("Quantidade de alunos aprovados: %d\n", aprov);	
	}                   
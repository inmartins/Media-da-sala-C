#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>


#define NUMERO_DE_ALUNOS 2
#define TAMANHO_NOME 100


void main(){
	char nome[TAMANHO_NOME][NUMERO_DE_ALUNOS];
	double nota[NUMERO_DE_ALUNOS];
	int i;
	double m;
	
	for(i=0;i<NUMERO_DE_ALUNOS;i++)
	{
		fflush(stdin);
		
		printf("\n Informe o nome do aluno %d: ", i+1);
		fgets(nome[i], TAMANHO_NOME, stdin);
		
		printf("\n nota do aluno %s:", nome[i]);
		scanf("%lf", &nota[i]);
	}
	
	for(i=0, m=0.0;i<NUMERO_DE_ALUNOS;i++)
	{
		m+=nota[i];
	}
	printf("\n a media da sala %.2f:", m/NUMERO_DE_ALUNOS);
	
	printf("\n\n");
	system("pause");
}

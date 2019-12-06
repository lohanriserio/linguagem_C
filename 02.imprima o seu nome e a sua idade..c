#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char nome[100];
	int idade;
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("\n");
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("\n\n");
	printf("Seu nome e'' ");
	printf("%s", nome);
	printf(" e sua idade e' ");
	printf("%d", idade);
	printf("\n\n");
	
	system("PAUSE"); 
	return 0;
}

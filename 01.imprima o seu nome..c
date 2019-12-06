#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char nome[100];	
	printf("Digite seu nome: \n\n");
    scanf("%s", &nome);
    printf("\n\n");	
	printf("%s", nome, ("\n\n"));	
	printf("\n\n");	
	system("PAUSE"); 
	return 0;
}

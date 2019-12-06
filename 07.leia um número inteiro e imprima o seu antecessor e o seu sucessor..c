#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int numero,antecessor,sucessor;
	printf("Digite um numero qualquer: ");
	scanf("%d", &numero);
	antecessor=numero-1;
	sucessor=numero+1;
	printf("\n");
	printf("O antecessor de %d e' %d e o sucessor e' %d.", numero, antecessor, sucessor);
	printf("\n\n");
	
	system("PAUSE"); 
	return 0;
}

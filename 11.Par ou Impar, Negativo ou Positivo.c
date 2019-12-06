#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int guarda,teste,resto;
	double numero,decimal;
	printf("NUMERO PAR OU IMPAR\n\n");
	printf("Digite um numero inteiro: "); 
	scanf("\n\n%lf", &numero);
	guarda=numero/1;
	decimal=numero-guarda;
	while(decimal>0){
		printf("O numero digitado nao é inteiro, por favor digite um numero inteiro: \n\n"); 
		scanf("\n\n%lf", &numero);
		guarda=numero;
		decimal=numero-guarda;	
	}
	resto=guarda%2; 
	if (resto>0 && guarda>0)
			printf("\nO numero digitado é positivo impar \n\n");
	if (resto<0 && guarda<0)
			printf("\nO numero digitado é negativo impar \n\n");	
	if (resto==0 && guarda>0)
			printf("\nO numero digitado é positivo par \n\n");
	if (resto==0 && guarda<0)
			printf("\nO numero digitado é negativo par \n\n");			
	system("PAUSE"); 
	return 0;
}

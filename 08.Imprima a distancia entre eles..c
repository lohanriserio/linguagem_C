#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	double x1,x2,y1,y2,ponto;
	printf("Digite o valor de x1: ");
	scanf("%lf", &x1);
	printf("Digite o valor de x2: ");
	scanf("%lf", &x2);
	printf("Digite o valor de y1: ");
	scanf("%lf", &y1);
	printf("Digite o valor de y2: ");
	scanf("%lf", &y2);
	ponto=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("\n");
	printf("A distacia entre os dos pontos é: %0.2lf", ponto);
	printf("\n\n");
	
	system("PAUSE"); 
	return 0;
}

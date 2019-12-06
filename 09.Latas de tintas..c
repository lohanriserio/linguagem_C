#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	double area,litros,latas,custo,raio,altura;
	printf("Quantidade de Latas de Tintas  \n\n");
	printf("Digite o valor do raio: ");
	scanf("%lf", &raio);
	printf("Digite o valor da altura: ");
	scanf("%lf", &altura);
		area=3.14*pow(raio,2)+2*3.14*raio*altura;
		litros=area/3;
		latas=litros/5;
		custo=latas*20;
	printf("\nA quantidade de latas é de %0.2lf ", latas);
	printf("\nO custo é de R$%0.2lf", custo);
	printf("\n\n");
	
	system("PAUSE"); 
	return 0;
}

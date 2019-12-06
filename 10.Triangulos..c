#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	double a,b,c;
	printf("TRIÂNGULOS\n\n");
	printf("Digite o valor dos lados do triângulo: \n\n"); 
	scanf("\n\n%lf%lf%lf", &a,&b,&c);
	if(a<b+c && b<a+c && c<a+b){
		if (a==b && b==c)
		printf("\nÉ um triângulo equilátero\n\n");	
		if (a==b && a!=c || a==c && a!=b || b==c && b!=a)
		printf("\nÉ um triângulo isóceles\n\n");	
		if (a!=b && a!=c && b!=c)
		printf("\nÉ um triângulo escaleno\n\n");	
	}
	else
		printf("\nNão é um triângulo\n\n");	
	system("PAUSE"); 
	return 0;
}

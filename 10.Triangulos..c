#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	double a,b,c;
	printf("TRI�NGULOS\n\n");
	printf("Digite o valor dos lados do tri�ngulo: \n\n"); 
	scanf("\n\n%lf%lf%lf", &a,&b,&c);
	if(a<b+c && b<a+c && c<a+b){
		if (a==b && b==c)
		printf("\n� um tri�ngulo equil�tero\n\n");	
		if (a==b && a!=c || a==c && a!=b || b==c && b!=a)
		printf("\n� um tri�ngulo is�celes\n\n");	
		if (a!=b && a!=c && b!=c)
		printf("\n� um tri�ngulo escaleno\n\n");	
	}
	else
		printf("\nN�o � um tri�ngulo\n\n");	
	system("PAUSE"); 
	return 0;
}

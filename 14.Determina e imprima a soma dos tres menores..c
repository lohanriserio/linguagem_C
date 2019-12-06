#include <stdio.h> // abrindo biblioteca
#include <stdlib.h>
#include <locale.h>

int main(void){   
		/*Programadores Lohan e Marcelo*/
		setlocale(LC_ALL, "Portuguese");
		float a, b, c, d, soma;
          printf("O programa exibe a soma dos três menores numeros.\n");
          
		  printf("Digite um número a:\n");
          scanf("%f", &a);
          
		  printf("Digite um número b:\n");
          scanf("%f", &b);
          
		  printf("Digite um número c:\n");
          scanf("%f", &c);
          
		  printf("Digite um número d:\n");
          scanf("%f", &d);
          
          
          if (a>b && a>c && a>d){
          	soma=a+b+c+d;
			}
		  if (b>a && b>c && b>d){
          	soma=a+c+d;
          }
          if (c>a && c>b && c>d){
          	soma=a+b+d;
          }
          if (d>a && d>b && d>c){
          	soma=a+b+c;
          }
             printf("O valor da soma é: %.2f\n", soma);      
         
		 system("pause");
 }


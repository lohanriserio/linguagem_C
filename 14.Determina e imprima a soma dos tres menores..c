#include <stdio.h> // abrindo biblioteca
#include <stdlib.h>
#include <locale.h>

int main(void){   
		/*Programadores Lohan e Marcelo*/
		setlocale(LC_ALL, "Portuguese");
		float a, b, c, d, soma;
          printf("O programa exibe a soma dos tr�s menores numeros.\n");
          
		  printf("Digite um n�mero a:\n");
          scanf("%f", &a);
          
		  printf("Digite um n�mero b:\n");
          scanf("%f", &b);
          
		  printf("Digite um n�mero c:\n");
          scanf("%f", &c);
          
		  printf("Digite um n�mero d:\n");
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
             printf("O valor da soma �: %.2f\n", soma);      
         
		 system("pause");
 }


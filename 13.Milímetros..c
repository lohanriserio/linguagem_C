#include <stdio.h> // abrindo biblioteca
#include <stdlib.h>
#include <locale.h>

int main(void){   
		/*Programadores Lohan e Marcelo*/
		setlocale(LC_ALL, "Portuguese");
		float f, c, p, mm;
          printf("programa de conversão de Fahrenheit em Celsius \n");
          printf("Digite o valor em Fahrenheit:");
          scanf("%f", &f);
          printf("Digite a quantidade de chuva em polegadas:");
          scanf("%f", &p);
          
		  c=(5*f-160)/9;
		  mm=(p*25.4);
		
		  printf("A temperatura em fahrenheit é: %.2f\n", c);		
    	  printf("A quantidade de chuvas em milimitros é: %.2f\n", mm);
    	  
		  system("pause");
		  return 0;
 }



#include <stdio.h> // abrindo biblioteca
#include <stdlib.h>
#include <locale.h>

int main(void){   
      /*Programadores Lohan e Marcelo*/
      setlocale(LC_ALL, "Portuguese");
      int idade,batimentos;
          printf("Programa dos batimentos do Cora��o\n");
          printf("Digite sua idade:");
          scanf("%idade", &idade);
        batimentos=idade*31536000;
        printf("A quantidade de seus batimentos, at� o momento, foi de: %d\n", batimentos);
		  system("pause");
		  return 0;
 }



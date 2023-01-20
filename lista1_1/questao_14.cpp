/*14. Faça um programa que receba o ano de nascimento de uma pessoa e o
ano atual. Calcule e mostre:
a) A idade dessa pessoa.
b) Quantos anos essa pessoa terá em 2050.*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

   int main(){
   	
   	int ano_nasc, ano_atual, idade, id_funtura;
   	
   	system("cls");
   	printf("\nInforme o ano de nascimento.\n");
   	scanf("%i",&ano_nasc);
   	printf("\nInforme o ano de atual.\n");
   	scanf("%i",&ano_atual);
   	
   	idade = (ano_atual - ano_nasc);
   	id_funtura = (2050 - ano_nasc);
   	
   	printf("\nIdade atual e.  %i\n",idade);
   	printf("\nIdade Em 2050 e.  %i\n", id_funtura);
   	
	
   	getch();
   	return 0;
   }

/*3 Faça um programa que receba dois números e mostre o maior.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	int n1,n2;
  	
  	system("cls");
  	printf("\nInforme o primeiro numero.\n");
  	scanf("%i",&n1);
  	printf("\nInforme o segundo numero.\n");
  	scanf("%i",&n2);
  	
  	if(n1 > n2)
  	  printf("O primeiro numero e o maior:  %i",n1);
		else if(n1 < n2)	
  		   printf("\nO segundo numero e o maior:  %i\n",n2);
	  else
	     printf("\nOs dois sao iguais.\n");	
	  
  	
  	getch();
  	return 0;
  }


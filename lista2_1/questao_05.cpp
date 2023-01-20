/*5 Faça um programa que receba três números obrigatoriamente em ordem e um
quarto número que não siga esta regra. Mostre, em seguida, os quatro números
em ordem decrescente.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


 int main (){
 	
 	int n1,n2,n3,n4;
 	
 	system("cls");
 	printf("\nInforme os tre numeros.\n");
 	scanf("%i",&n1);
 	scanf("%i",&n2);
 	scanf("%i",&n3);
 	
 	printf("\nInforme o quarto numero.\n");
 	scanf("%i",&n4);
 	
 	if(n4 > n3)
 	printf("\n %i %i %i %i \n",n4,n3,n2,n1);
 	 else if(n4 > n2)
 	    printf("\n %i %i %i %i \n",n3,n4,n2,n1);
 	      else if(n4 > n1)
 	          printf("\n %i %i %i %i \n",n3,n2,n4,n1);
 	        else if(n4 < n1)
 	             printf("\n %i %i %i %i \n",n3,n2,n1,n4);
 	    else
 	     printf("\nOs numeros sao iguis.\n");
 	      
 	getch();
 	return 0;
 }

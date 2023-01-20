/*10 Faça um programa que determine a data cronologicamente maior de duas 
datas fornecidas pelo usuário. Cada data deve ser fornecida por três 
valores inteiros, onde o primeiro representa o dia, o segundo o mês e o 
terceiro o ano.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main (){
  	
  	int d1,m1,a1, d2,m2,a2;
  	
  	system("cls");
  	printf("\nInforme a  primeira data no formato (dd/mm/aaaa).\n");
  	printf("\nDigite o dia.  ");
  	scanf("%i",&d1);
  	printf("Digite o mes.  ");
  	scanf("%i",&m1);
  	printf("Digite o ano.  ");
  	scanf("%i",&a1);
  	
  	printf("\n");
  	printf("\nInforme a  segunda data no formato (dd/mm/aaaa).\n");
  	printf("\nDigite o dia.  ");
  	scanf("%i",&d2);
  	printf("Digite o mes.  ");
  	scanf("%i",&m2);
  	printf("Digite o ano.  ");
  	scanf("%i",&a2);
  	
  	printf("\n");
  	if (a1 > a2)
  		printf("A primeira data e maior. %i/%i/%i \n",d1,m1,a1);
	  else if(a2 > a1)
	  	printf("A segunda data e maior. %i/%i/%i \n",d2,m2,a2);
	      else if(m1 > m2)
	      printf("A primeira data e maior. %i/%i/%i \n",d1,m1,a1);
  	        else if(m2 > m1)
  	           printf("A segunda data e maior. %i/%i/%i \n",d2,m2,a2);
  	             else if(d1 > d2)
  	                printf("A primeira data e maior. %i/%i/%i \n",d1,m1,a1);
  	            else if(d2 > d1)
  	              printf("A segunda data e maior. %i/%i/%i \n",d2,m2,a2);
  	    else 
  	      printf("\nAs duas datas sao iguais...\n");
  	    
  	    
  	getch();
  	return 0;
  }

/*Faça um programa que determine a data cronologicamente 
maior de duas datas fornecidas pelo usuário. Cada data deve
ser fornecida por três valores inteiros, onde o primeiro 
representa o dia, o segundo o mês e o terceiro o ano.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	int d1,m1,a1, d2,m2,a2;
  	
  	system("cls");
  	printf("\nINFORME A PRIMEIRA DATA.\n");
  	printf("\nDia (dd): ");
  	scanf("%i",&d1);
  	printf("Mes (mm): ");
    scanf("%i",&m1);
  	printf("Ano (aa): ");
  	scanf("%i",&a1);
  	
  	printf("\nINFORME A SEGUNDA DATA.\n");
  	printf("\nDia (dd): ");
  	scanf("%i",&d2);
  	printf("Mes (mm): ");
    scanf("%i",&m2);
  	printf("Ano (aa): ");
  	scanf("%i",&a2);
  	
  	if(a1>a2)
  	  printf("\nA primeira data e maior %i/%i/%i \n",d1,m1,a1);
  	else if(a1<a2)
  	  printf("\n A segunda data e maior %i/%i/%i \n",d2,m2,a2);
  	
    else if(a1==a2 && m1>m2)
  	  printf("\nA primeira data e maior %i/%i/%i \n",d1,m1,a1);
  	else if(a1==a2 && m1<m2)
  	  printf("\n A segunda data e maior %i/%i/%i \n",d2,m2,a2);
  	
	else if(a1==a2 && m1==m2 && d1>d2)
  	  printf("\nA primeira data e maior %i/%i/%i \n",d1,m1,a1);
  	else if(a1==a2 && m1==m2 && d1<d2)
  	  printf("\n A segunda data e maior %i/%i/%i \n",d2,m2,a2);
  	 else
  	   printf("\nAs datas sao iguais.\n");
  	
  	
  	
  	getch();
  	return 0;
  }

/*1.Fa�a um programa que receba quatro n�meros inteiros, calcule e mostre
a soma desses n�meros.*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
   
   int main (){
   	
   	int n1,n2,n3,n4,soma;
   	
    system("cls");
   	printf("\nInforme os quatros numero.\n");
   	scanf("%i",&n1);
   	scanf("%i",&n2);
   	scanf("%i",&n3);
   	scanf("%i",&n4);
   	
   	soma = (n1+n2+n3+n4);
   	
   	printf("\nA soam e:  %i\n",soma);
   	
   	
   	getch();
   	return 0;
   }

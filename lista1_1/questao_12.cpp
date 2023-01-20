/*12. Faça um programa que receba dois números maiores que zero, calcule e
mostre um elevado ao outro.*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(){
  	
  	float n1,n2, r1, r2;
  	
  	system("cls");
  	printf("\nInforme o primeiro numero.\n");
  	scanf("%f",&n1);
  	printf("\nInforme o segundo numero.\n");
  	scanf("%f",&n2);
  	
  	r1 = pow(n1,n2);
  	r2 = pow(n2,n1);
  	printf("\nResultado1: %.2f \n",r1);
  	printf("\nResultado2: %.2f \n",r2);
  	
  	getch();
  	return 0;
  }

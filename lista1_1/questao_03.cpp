/*3. Faça um programa que receba três notas e seus respectivos pesos, 
calcule e mostre a média ponderada dessas notas.*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	float n1,n2,n3, totalNotas, media;
  	float p1,p2,p3, totalPesos;
  	
  	system("cls");
  	printf("\nInforme as tre notas.\n");
  	scanf("%f",&n1);
  	scanf("%f",&n2);
  	scanf("%f",&n3);
  		
  	printf("\nInforme os tre pesos.\n");
  	scanf("%f",&p1);
  	scanf("%f",&p2);
  	scanf("%f",&p3);
  	
  	n1 *= p1;
  	n2 *= p2;
  	n3 *= p3;
  	
  	totalNotas = (n1+n2+n3);
  	totalPesos = (p1+p2+p3);
  	
  	media = (totalNotas / totalPesos);
  	
  	printf("\n A media e:  %.2f\n",media);
  	
  	
  	
  	getch();
  	return 0;
  }

/*9. Faça um programa que calcule e mostre a área de um triângulo. Sabe-se 
que: Área = (base * altura)/2.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	float base, altura, area;
  	
  	system("cls");
  	printf("\nInforme a base.\n");
  	scanf("%f",&base);
  	printf("\nInforme o valor da altura.\n");
  	scanf("%f",&altura);
  	
  	area = (base * altura)/2;
  	printf("\nA area e:  %.2f\n",area);
  	
  	getch();
  	return 0;
  }

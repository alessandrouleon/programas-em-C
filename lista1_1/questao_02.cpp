/*2. Fa�a um programa que receba tr�s notas, calcule e mostre a m�dia 
aritm�tica entre elas.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	float n1,n2,n3,media;
  	
  	system("cls");
  	printf("\nInforme as tres notas.\n");
  	scanf("%f",&n1);
  	scanf("%f",&n2);
  	scanf("%f",&n3);
  	
  	media = (n1+n2+n3)/3;
  	
  	printf("\nA media e:  %.2f\n",media);
  	
  	getch();
  	return 0;
  }

/*6. Fa�a um programa que receba o sal�rio-base de um funcion�rio, calcule
e mostre o sal�rio a receber, sabendo-se que esse funcion�rio tem 
gratifica��o de 5% sobre o sal�rio-base e paga imposto de 7% sobre o 
sal�rio-base.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	float sal;
  	
  	system("cls");
  	printf("\nInforme o salario base.\n");
  	scanf("%f",&sal);
  	
  	sal += (sal*5)/100;
  	sal -= (sal*7)/100;
  	
	  printf("\nO salario a receber e:  %.2f\n",sal);
  	
  	getch();
  	return 0;
  }

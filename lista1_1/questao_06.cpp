/*6. Faça um programa que receba o salário-base de um funcionário, calcule
e mostre o salário a receber, sabendo-se que esse funcionário tem 
gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o 
salário-base.*/

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

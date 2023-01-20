/*7. Faça um programa que receba o salário-base de um funcionário, calcule 
e mostre seu salário a receber, Sabendo-se que esse funcionário tem 
gratificação de R$50,00 e paga imposto de 10% sobre o salário-base.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

 int main(){
 	
 	float sal;
 	
 	system("cls");
 	printf("\nInforme o salario.\n");
 	scanf("%f",&sal);
 	
 	sal += 50;
 	sal -= (sal*10)/100;
 	printf("\nSalario a receber e:   %.2f\n",sal);
 	
 	
 	getch();
 	return 0;
 }

/*7. Fa�a um programa que receba o sal�rio-base de um funcion�rio, calcule 
e mostre seu sal�rio a receber, Sabendo-se que esse funcion�rio tem 
gratifica��o de R$50,00 e paga imposto de 10% sobre o sal�rio-base.*/

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

/*8. Faça um programa que receba o valor de um depósito e o valor da taxa de
juros,calcule e mostre o valor do rendimento e o valor total depois do 
rendimento.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
 
 
 int main(){
 	
 	float dep,juro,rend, saldo;
 	
 	system("cls");
 	printf("\nInforme o valor do deposito.\n");
 	scanf("%f",&dep);
 	printf("\nInforme o valor do juro.\n");
 	scanf("%f",&juro);
 	
 	rend = (dep * juro)/100;
 	saldo = (dep+rend);
 	printf("\nRendimento e:  %.2f\n",rend);
 	printf("\nO saldo e:  %.2f\n",saldo);
 	
 	getch();
 	return 0;
 }

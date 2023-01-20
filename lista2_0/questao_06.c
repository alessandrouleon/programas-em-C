/*6 Faça um programa que receba um número inteiro e verifique 
se esse número é par ou ímpar.*/

#include <stdio.h>
#include <stdlib.h>

 int main (){
 	
 	int num;
 	
 	system("cls");
 	printf("\nInforme o numero:  \n");
 	scanf("%i",&num);
 	
 	if(num % 2 == 0){
 		printf("\nPar:\n");
	 }else{
 		printf("\nImpar:\n");	
	 }
	 
 	getch();
 	return 0;
 }

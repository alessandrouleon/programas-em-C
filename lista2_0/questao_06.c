/*6 Fa�a um programa que receba um n�mero inteiro e verifique 
se esse n�mero � par ou �mpar.*/

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

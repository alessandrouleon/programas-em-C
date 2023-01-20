/*6 Faça um programa que receba um número inteiro e verifique se esse númer
o é par ou ímpar.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	int num;
  	
  	system("cls");
  	printf("\nInforme o numero.\n");
  	scanf("%i",&num);
  	
  	if(num % 2 == 0){
  		printf("\nO numero e par.\n");  		
	  }else{
	  	printf("\nO numero e Impar.\n");
	  }
  	
  	
  	getch();
  	return 0;
  }
 

/*6 Fa�a um programa que receba um n�mero inteiro e verifique se esse n�mer
o � par ou �mpar.*/

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
 

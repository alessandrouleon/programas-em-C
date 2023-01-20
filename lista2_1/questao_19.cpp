/*19 Faça um programa que receba a altura e o peso de uma pessoa. 
De acordo com a tabela a seguir verifique e mostre qual a classificação
dessa pessoa.
    ____________________________________________________
    |                |______________Peso_______________|   
	|    Altura      |Ate 60 |Entre 60 e 90|Acima de 90|
	|----------------|-------|-------------|-----------|
    |Menores que 1,20|   A   |      D      |     G     |
    |De 1,20 a 1,70  |   B   |      E      |     H     |  
    |Maiores que 1,70|   C   |      F      |     I     |
    |________________|_______|_____________|___________|
*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
    float altura, peso;
    
    system("cls");
    printf("Informe a altura:  ");
  	scanf("%f",&altura);
  	printf("Informe o peso:  ");
  	scanf("%f",&peso);
  	
  	if(altura < 1.20){
  		if(peso <= 60)
  		  printf("A");
  		  else if(peso <= 90)
  		       printf("D");
  		  else
  		     printf("G");
	  }
  	else if(altura <= 1.70){
  		if(peso <= 60)
  		  printf("B");
  		  else if(peso <= 90)
  		       printf("E");
  		  else
  		     printf("H");
	  }
	 
	else{
  		if(peso <= 60)
  		  printf("C");
  		  else if(peso <= 90)
  		       printf("F");
  		  else
  		     printf("I");
    }

  	getch();
  	return 0;	
  }
  
  

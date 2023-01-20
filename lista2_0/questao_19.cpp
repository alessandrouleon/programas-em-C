/*19 Faça um programa que receba a altura e o peso de uma pessoa. 
De acordo com a tabela a seguir verifique e mostre qual a classificação
dessa pessoa.
  _____________________________________________________________________
  |                  |_________________________Peso___________________|
  |    Aultura       |  Ate 60 |Entre 60 e 90(inclusive) | Acima de 90|
  |__________________|_________|_________________________|____________|
  |Menores que 1,20  |    A    |            D            |      G     |
  |De 1,20 a 1,70    |    B    |            E            |      H     |
  |Maiores que 1,70  |    C    |            F            |      I     |
  |__________________|_________|_________________________|____________|

*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

 int main(){
 	
 	float altura, peso;
 	
 	system("cls");
 	printf("\n Informe a altura:   ");
 	scanf("%f",&altura);
 	printf("\n Informe o peso:  ");
 	scanf("%f",&peso);
 	
 	if(altura <= 0 || peso <= 0){
 		printf("\n Altura ou peso nao pode ser negativo e nem igual a '0'.\n");
 		
	 }else{
	 	if(altura < 1.20){
	 		if(peso <= 60)
	 		printf("\n A \n");  
	 	  	    else if(peso > 60 && peso <= 90){
	 	  	     printf("\n D \n");
		    }
		   else{
	 	  	   printf("\n G \n");
		   }		       
		 }
		 
	 else if(altura >= 1.20 && altura  < 1.71){
	 		if(peso <= 60)
	 		printf("\n B \n");  
	 	  	    else if(peso > 60 && peso <= 90){
	 	  	     printf("\n E \n");
		    }
		   else{
	 	  	   printf("\n H \n");
		   }		       
		 }
		 
	    else if(altura > 1.70){
	 		if(peso <= 60)
	 		printf("\n C \n");  
	 	  	    else if(peso > 60 && peso <= 90){
	 	  	     printf("\n F \n");
		    }
		   else{
	 	  	   printf("\n I \n");
		   }		       
		 }
	 	
	 }
 	
 	
 	getch();
 	return 0;
 }
 
 
 
 

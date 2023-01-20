/*3 Faça um programa que receba dois números e mostre o maior.*/

#include <stdio.h>
#include <stdlib.h>

  int main (){
  	
  	int n1, n2, aux;
  	
  	system("cls");
  	printf ("informe os dois numeros:\n");
  	scanf("%i",&n1);
  	scanf("%i",&n2);
  	 	
	  if(n1 > n2){
  	     aux = n1;		
	   }
	    else{
  	      aux = n2;		
	    }	  
	    printf ("Numero maior e: %i", aux);
	  
  	getch();
  	return 0;
  }

/*7 Faça um programa que receba quatro valores, I, A, B e C. I é um valor 
inteiro e positivo e A, B, C são valores reais. Escreva os números 
A, B, e C obedecendo a tabela a seguir. Supondo que o valor digitado 
para I seja sempre um valor válido, ou seja, 1, 2 ou 3
    
 VALOR DE l  FORME DE ESCREVER
     1       A,B e C em ordem crescente
	 2       A,B,e C em ordem decrescente
	 3       O maior fica emtre os dois numeros
*/

#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	int i;
  	float A,B,C;
  	
  	system("cls");
  	printf("\nInforme um numero inteiro positivo:\n");
  	scanf("%i",&i);
  	
	  if(i < 1 || i > 3){
  		printf("\nOpcao invalida.!\n");
	  }else{
	  	printf("\nInforme tres numero reais:\n");
  	    scanf("%f",&A);
  	    scanf("%f",&B);
  	    scanf("%f",&C);
  	
  	   if(i == 1){
  	   	printf("\n O maior fica emtre os dois numeros \n");
  	   	  if(A < B && A < C){
  	   	  	if(B < C)
  	   	    printf("\n %.2f - %.2f - %.2f \n",A,B,C);
      	  else
      	  	printf("\n %.2f - %.2f - %.2f \n",A,C,B); 
	    }
		  if(B < A && B < C){
		    if(A < C)
  	   	    printf("\n %.2f - %.2f - %.2f \n",B,A,C);
      	  else
      	    printf("\n %.2f - %.2f - %.2f \n",B,C,A);
		}	   
	      if(C < A && C < B){
   	        if(A < B)
 	        printf("\n %.2f - %.2f - %.2f  \n",C,A,B);
      	  else
      	    printf("\n %.2f - %.2f - %.2f  \n",C,B,A);
	   }	      
    } 
    
    //opcao 2
    if(i == 2){
  	   	printf("\n Ordem Decrescente \n");
  	   	  if(A > B && A > C){
  	   	  	if(B > C)
  	   	    printf("\n %.2f - %.2f - %.2f \n",A,B,C);
      	  else
      	  	printf("\n %.2f - %.2f - %.2f \n",A,C,B); 
	    }
		  if(B > A && B > C){
		    if(A > C)
  	   	    printf("\n %.2f - %.2f - %.2f \n",B,A,C);
      	  else
      	    printf("\n %.2f - %.2f - %.2f \n",B,C,A);
		}	   
	      if(C > A && C > B){
   	        if(A > B)
 	        printf("\n %.2f - %.2f - %.2f  \n",C,A,B);
      	  else
      	    printf("\n %.2f - %.2f - %.2f  \n",C,B,A);
	   }	      
    }
     
	else
  	   	printf("\n Ordem com numero maior no  \n");
  	   	  if(A < B && A < C){
  	   	  	if(B < C)
  	   	    printf("\n %.2f - %.2f - %.2f \n",A,C,B);
      	  else
      	  	printf("\n %.2f - %.2f - %.2f \n",A,B,C); 
	    }
		  if(B < A && B < C){
		    if(A < C)
  	   	    printf("\n %.2f - %.2f - %.2f \n",B,C,A);
      	  else
      	    printf("\n %.2f - %.2f - %.2f \n",B,A,C);
		}	   
	      if(C < A && C < B){
   	        if(A < B)
 	        printf("\n %.2f - %.2f - %.2f  \n",C,B,A);
      	  else
      	    printf("\n %.2f - %.2f - %.2f  \n",C,A,B);
	   }	 
    }
    
    getch(); 
  	return 0;
  }
  
  
  
  
  /*else if(i == 1){
 	 	  if(A < B && B < C)
  	     printf("\n%.2f - %.2f - %.2f \n",A,B,C);
          if(A < C && C < B)
  	     printf("\n%.2f - %.2f - %.2f \n",A,C,B);
  	      if(B < A && A < C)
  	     printf("\n%.2f - %.2f - %.2f \n",B,A,C);
  	      if(B < C && C < A)
  	     printf("\n%.2f - %.2f - %.2f \n",B,C,A);
  	      if(C < A && A < B)
  	     printf("\n%.2f - %.2f - %.2f \n",C,A,B);
  	      if(C < B && B < A)
  	     printf("\n%.2f - %.2f - %.2f \n",C,B,A); 
       }
    else if(i == 2){
	  	  if(A > B && B > C)
  	     printf("\n%.2f - %.2f - %.2f \n",A,B,C);
          if(A > C && C > B)
  	     printf("\n%.2f - %.2f - %.2f \n",A,C,B);
  	      if(B > A && A > C)
  	     printf("\n%.2f - %.2f - %.2f \n",B,A,C);
  	      if(B > C && C > A)
  	     printf("\n%.2f - %.2f - %.2f \n",B,C,A);
  	      if(C > A && A > B)
  	     printf("\n%.2f - %.2f - %.2f \n",C,A,B);
  	      if(C > B && B > A)
  	     printf("\n%.2f - %.2f - %.2f \n",C,B,A);
       }
  	else { 	
	  	 if(A < B && B < C)
  	     printf("\n%.2f - %.2f - %.2f \n",A,C,B);
          if(A < C && C < B)
  	     printf("\n%.2f - %.2f - %.2f \n",A,B,C);
  	      if(B < A && A < C)
  	     printf("\n%.2f - %.2f - %.2f \n",B,C,A);
  	      if(B < C && C < A)
  	     printf("\n%.2f - %.2f - %.2f \n",B,A,C);
  	      if(C < A && A < B)
  	     printf("\n%.2f - %.2f - %.2f \n",C,B,A);
  	      if(C < B && B < A)
  	     printf("\n%.2f - %.2f - %.2f \n",C,A,B);
     }*/
  
  
  
  
  
  
  

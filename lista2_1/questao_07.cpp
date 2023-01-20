/*7 Faça um programa que receba quatro valores, I, A, B e C. I é um valor 
inteiro e positivo e A, B, C são valores reais. Escreva os números A, B, 
e C obedecendo a tabela a seguir. Supondo que o valor digitado para I seja
sempre um valor válido, ou seja, 1, 2 ou 3.
   __________________________________________________
   |            |                                   |
   | Valor de i |   Forma de Escrever               |
   |____________|___________________________________|
   |     1      |A,B e C em ordem crescente         |
   |     2      |A,B e C em ordem decrescente       |
   |     3      |O maior fica entre os dois numeros |
   |____________|___________________________________|    
*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

   int main(){
   	
   	int i;
   	float a,b,c;
   	
   	system("cls");
   	printf("\nDigite tres numeros.\n");
   	scanf("%f",&a);
   	scanf("%f",&b);
   	scanf("%f",&c);
   	printf("\nEscolha uma das opcoes. entre 1, 2 ou 3.\n");
   	scanf("%i",&i);
   		
	   	   switch(i){
	   	   	   case 1:
	   	   	   	if(a < b && a < c)
	   	   	   	  if(b < c)
	   	   	   	    printf("\n %.1f  %.1f  %.1f \n",a,b,c);
	   	   	   	  else
 	   	   	        printf("\n %.1f  %.1f  %.1f \n",a,c,b);
   	   	             else if(b < a && b < c)
   	   	                  if(a < c)
   	   	                    printf("\n %.1f  %.1f  %.1f \n",b,a,c);
	                      else
   	   	                    printf("\n %.1f  %.1f  %.1f \n",b,c,a);
  	                          else if(c < a && c < b)
                                   if(a < b)
                                     printf("\n %.1f  %.1f  %.1f \n",c,a,b);
                                   else
                                     printf("\n %.1f  %.1f  %.1f \n",c,b,a);
		                        break;
				
				case 2:
		         if(a > b && a > c)
	   	   	   	  if(b > c)
	   	   	   	    printf("\n %.1f  %.1f  %.1f \n",a,b,c);
	   	   	   	  else
 	   	   	        printf("\n %.1f  %.1f  %.1f \n",a,c,b);
   	   	             else if(b > a && b > c)
   	   	                  if(a > c)
   	   	                    printf("\n %.1f  %.1f  %.1f \n",b,a,c);
	                      else
   	   	                    printf("\n %.1f  %.1f  %.1f \n",b,c,a);
  	                          else if(c > a && c > b)
                                   if(a > b)
                                     printf("\n %.1f  %.1f  %.1f \n",c,a,b);
                                   else
                                     printf("\n %.1f  %.1f  %.1f \n",c,b,a);   
		                    break;
		        
		        case 3:
		        if(a < b && a < c)
	   	   	   	  if(b < c)
	   	   	   	    printf("\n %.1f  %.1f  %.1f \n",a,c,b);
	   	   	   	  else
 	   	   	        printf("\n %.1f  %.1f  %.1f \n",a,b,c);
   	   	             else if(b < a && b < c)
   	   	                  if(a < c)
   	   	                    printf("\n %.1f  %.1f  %.1f \n",b,c,a);
	                      else
   	   	                    printf("\n %.1f  %.1f  %.1f \n",b,a,c);
  	                          else if(c < a && c < b)
                                   if(a < b)
                                     printf("\n %.1f  %.1f  %.1f \n",c,b,a);
                                   else
                                     printf("\n %.1f  %.1f  %.1f \n",c,a,b);
	                        break;
            default:
                printf("\nOpcao invalida, escolha um numero entre 1 a 3.\n");
		    } 	     
	   
   	
   	
   	
   	getch();
   	return 0;
   }

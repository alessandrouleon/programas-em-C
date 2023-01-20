/*14 Faça um programa que receba o salário de um funcionário, calcule 
e mostre o novo salário desse funcionário, acrescido de bonificação e de 
auxílio-escola.
   
       SALARIO                              BONIFICACAO
   Ate R$500.00                            5% do salario
   Entre R$500.01 a R$1.200.00            12% do salario
   Acima de R$1,200.00                    Sem bonificacao
   
    SALARIO                               AUXILIO-ESCOLA
  Ate R$600.00                            R$150.00
  Mais que R$600.00                       R$100.00 
*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

   int main () {
   	
   	float salario, bonificacao, auxilioEscola, novoSalario;
   	
   	system("cls");
   	printf("\nInforme o salario do funcionario.\n");
   	scanf("%f",&salario);
   	
   	if(salario <= 0){
   		printf("\nSalario invalido\n");   		
	   }
	   else{
	   	    if(salario <= 500){
   	    	  bonificacao = (salario * 5)/100;
	   	      novoSalario = (salario + bonificacao + 150);
			  printf("\nNovo Salario e:  %.2f\n", novoSalario);	
		    }
			  		   
		      if(salario > 500 && salario <= 1200){
			   	bonificacao = (salario * 12)/100;
			   		if(salario <= 600){
			   		novoSalario = (salario + bonificacao + 150);
		            printf("\nNovo Salario e:  %.2f\n", novoSalario); 
		        }else{
		             novoSalario = (salario + bonificacao + 100);
	                 printf("\nNovo Salario e:  %.2f\n", novoSalario);
	     	    }		   
	        }
	        else{
	        	printf("\nNovo Salario e:  %.2f\n",salario);
			}
	
   }
   	
   	getch();
   	return 0;
   }
   
   

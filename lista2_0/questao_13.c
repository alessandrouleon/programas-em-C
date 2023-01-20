/*13 Faça um programa que apresente o menu de opções a seguir, permita ao 
usuário escolher a opção desejada, receba os dados necessários para executar
a operação e mostre o resultado. Verifique a possibilidade de opção inválida
e não se preocupe com restrições como salário negativo.

Menu de opções:
1 Imposto
2 Novo Salário
3 Classificação
Digite a opção desejada ->
Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor
do imposto usando as regras a seguir:
 
      SALARIOS             PERCENTUAL DE IMPOSTO
  Menor que R$500.00            5%
  De R$500.00 a R$850.00       10%
  Acima de R$850.00            15%
  
Na opcao 2: Receber o salario de um funcionario, calcular o valor do novo
salario, usando as regras a seguir.

     SALARIO                            AUMENTO
  Maiores que R$1.500.00                R$25.00
  De R$750.00(inclusive)a R$1,500.00    R$50.00
  De R$450.00(inclusive)a R$750.00      R$75.00
  Menores que R$450.00                  R$100.00
  
Na opção 3: receber o salário de um funcionário e mostrar sua classificação
usando a tabela a seguir:

      SALARIO                   CLASSIFICACAO    
  Ate R$700.00(inclusive)     Mal remunerado
  MAiores que R$700.00        Bem remunerado
*/


#include <conio.h>
#include <stdio.h>
#include<stdlib.h>

  int main(){
  	
  	int opcao;
  	float salario, novoSalario, imposto;
  	
  	printf("\n :::::MENU DE OPCOES::::::\n");
  	printf("\t1. Imposto\n");
  	printf("\t2. Novo Salario\n");
  	printf("\t3. Classificacao\n");
  	printf("\n");
  	
  	printf("\nEscolha uma das opcoes.\n");
  	scanf("%i",&opcao);
  	
  	if(opcao > 0 && opcao < 4){
  		if (opcao == 1){
  			printf("\n::CALCULO DE IMPOSTO::\n");
  			printf("\nInforme o valor do salario:   ");
  			scanf("%f",&salario);
	           if(salario < 500){
	             imposto = (salario * 5)/100;
	     	     printf("\nImposto e:  %.2f",imposto);
		        }
                else if(salario >= 500 && salario <= 850){
    	             imposto = (salario * 10)/100;
    	             printf("\nImposto e:  %.2f",imposto);
                } 
            else if(salario > 850){
                   imposto = (salario * 15)/100;
                   printf("\nImposto e:  %.2f",imposto);
	        } 
        }
	
	//opcao 2
	
  		if (opcao == 2){
  			printf("\n::CALCULO DO NOVO SALARIO::\n");
  			printf("\nInforme o valor do salario:   ");
  			scanf("%f",&salario);
	          
			   if(salario > 1500){
			   novoSalario += (salario + 25);
	     	   printf("\nNovo Salario e:  %.2f",novoSalario);
			 }    
              else if(salario >= 750 && salario <= 1500){
              		 novoSalario += (salario + 50);
    	             printf("\nINovo Salario e:  %.2f",novoSalario);
                }
               else if(salario >=450 && salario < 750){
          		   novoSalario += (salario + 75);
                   printf("\nNovo Salario e:  %.2f",novoSalario);
	            }
	           else if(salario < 450){
	        	   novoSalario += (salario + 100);
                   printf("\nNovo Salario e:  %.2f",novoSalario);
			    } 
            }
		 //opcao 3 	  	
  		else if (opcao == 3){
  		  	printf("\n::CLASSIFICACAO::\n");
  			printf("\nInforme o valor do salario:   ");
  			scanf("%f",&salario);
  			
  			if(salario <= 700){
  				printf("\nMal remunerado\n");
			  }else{
			  		printf("\nBem remunerado\n");
			  }
		}
  		
	  }else{
	  	printf("\nOpcao invalida.\n");
	  }
  	
  	
  	
  	getch();
  	return 0;
  }


















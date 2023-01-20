/*14 Faça um programa que receba o salário de um funcionário, calcule e 
mostre o novo salário desse funcionário, acrescido de bonificação e de 
auxílio-escola.
____________________________________________ ______________________________
|        Salario           |  Bonificacao  | |  Salario        |Aux-Escola|
|--------------------------|---------------| |-----------------|----------|
|Ate R$500.00              |5% do salario  | |Ate R$600.00     |R$150.00  |
|Entre R$500.01 a R$1200.00|12% do salario | |Mais que R$600.00|R$100.00  |
|Acima de R$1200.00        |Sem bonificacao| |_________________|__________|
|__________________________|_______________|
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

   int main(){
   	
   	float sal, boni, aux_es,novo_sal;
   	
   	system("cls");
   	printf("\nIforme o salario:  ");
   	scanf("%f",&sal);
   	
   	if(sal <= 500)
   		boni = (sal*5)/100; 
	   else if(sal <= 1200)
	   	boni = (sal*12)/100;
   	    else 
		   boni = (sal*0)/100;  
   	
	    if(sal <= 600){
	    	aux_es = 150;
		}else{
		    aux_es = 100;	
		}    
	         
   	    novo_sal = (sal+boni+aux_es); 
		printf("\nO novo salario e:  %.2f\n",novo_sal);    
   	
   	getch();
   	return 0;
   }

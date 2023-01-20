/*16 Um supermercado deseja reajustar os pre�os de seus produtos usando o
seguinte crit�rio: o produto poder� ter seu pre�o aumentado ou diminu�do.
Para alterar o pre�o o produto deve preencher pelo menos um dos requisitos
a seguir:    
 ______________________________________________________________________
 |              Requisito                |          Reajustes         |
 |---------------------------------------|----------------------------|
 |Venda Media Mensal|    Preco Atual     |% de Aumento|% de Diminuicao|
 |------------------|--------------------|------------|---------------|
 | < 500            |<R$30.00            |    10      |       -       |
 |>= 500 e < 1200   |>=R$30.00 e <R$80.00|    15      |       -       |        
 |>=1200            |>=R$80.00           |     -      |      20       |
 |__________________|____________________|____________|_______________|
 
Fa�a um programa que receba o pre�o atual e a venda mensal m�dia do 
produto,calcule e mostre o novo pre�o. 
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

   int main(){
   	
   	float v_mansal, preco_atua, novo_preco;
	   
	 system("cls"); 
   	 printf("\nInforme preco atual do produto:  ");
   	 scanf("%f",&preco_atua);
   	 printf("Informe o valor da venda mensal:  ");
   	 scanf("%f",&v_mansal);
   	 
   	 if(v_mansal < 500 && preco_atua < 30)
   	   novo_preco = preco_atua + (preco_atua * 10)/100;
	    else if(v_mansal < 1200) {
             if(preco_atua >= 30 && preco_atua < 80)
               novo_preco = preco_atua + (preco_atua * 15)/100;	
            }
        else
           novo_preco = preco_atua - (preco_atua * 20)/100;
   	
   	printf("\nO novo preco e:  %.2f\n",novo_preco);
   	 	
   	getch();
   	return 0;
   }   













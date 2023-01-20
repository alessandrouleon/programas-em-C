/*20 Faça um programa que receba:
O código de um produto comprado, supondo que a digitação do código do 
produto seja sempre válida, ou seja, um número inteiro entre 1 e 10;
O peso do produto em quilos;
O código do país de origem, supondo que a digitação do código do país seja
sempre válida, ou seja, um número entre 1 e 3.
Tabelas:
   _________________________  _____________________
   |Codigo do Pais|        |  |Codigo do|Preco por|
   | de Origem    |Imposto |  | Produto |  Grama  |
   |--------------|--------|  |---------|---------|
   |      1       |   0%   |  |  1 a 4  |    10   |
   |      2       |  15%   |  |  5 a 7  |    25   |
   |      3       |  25%   |  |  8 a 10 |    35   |
   |______________|________|  |_________|_________|

Calcule e mostre:
O peso do produto convertido em gramas;
O valor do imposto, sabendo-se que o imposto é cobrado sobre o preço total 
do produto comprado e que depende do país de origem;
O valor total, preço total do produto mais imposto.  
*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	int cod_prod, cod_pais;
  	float peso_quilo, peso_grama, pre_grama, pre_gramas, imp, valor_total;
  	
  	system("cls");
  	printf("Informe o codigo do produto numero entre 1 a 10:  ");
  	scanf("%i",&cod_prod);
  	printf("Informe o peso do produto em quilo:  ");
  	scanf("%f",&peso_quilo);
  	printf("Informeo codigo do pais numro entre 1 a 3:  ");
  	scanf("%i",&cod_pais);
  	
  	
  	if(cod_prod < 1 || cod_prod > 10){
  		printf("\nCodigo do produto invalido..\n");
	  }else{
	  	  if(cod_pais < 1 || cod_pais > 3){
	  	  	   printf("\nCodigo do pais invalido..\n");
			}else{
				peso_grama = (peso_quilo * 1000);
            	printf("\nO peso em gram e:  %.2f\n",peso_grama);
            
			if(cod_prod <= 4)
			  pre_gramas = (peso_grama * 10);
	        else if(cod_prod <= 7)
			       pre_gramas = (peso_grama * 25);
				else
				pre_gramas = (peso_grama * 35);
			
			if(cod_pais == 1)
			  imp = 0;
			  else if(cod_pais == 2)   
				   	 imp = (pre_gramas * 15)/100;
				 else
				   imp = (pre_gramas * 25)/100;
		
		valor_total = (pre_gramas + imp);		   
		printf("\nPreco das gramas:  %.2f\n",pre_gramas);
		printf("\nValor do imposto:  %.2f\n",imp);		   
		printf("\nValor total e:  %.2f\n",valor_total);		     	 
		}
	  }
  	
  	
      
  	
  	getch();
  	return 0;
  }












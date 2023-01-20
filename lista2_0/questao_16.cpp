/*6 Um supermercado deseja reajustar os preços de seus produtos usando o
seguinte critério: o produto poderá ter seu preço aumentado ou diminuído. 
Para alterar o preço o produto deve preencher pelo menos um dos requisitos
a seguir: 
  ________________________________________________________________________
  |               REQUISITOS                 |         REAJUSTES         |
  |-----------------------------------------------------------------------                        
  |Venda Media Mensal |     Preco Atual      |% Aumento  |% De Diminuicao|
  |-----------------------------------------------------------------------
  | < 500             | < R$30.00            |     10    |       -       |
  |>= 500 e < 1200    |>= R$30.00 e < R$80.00|     15    |       -       |
  |>= 1200            |>= R$80.00            |      -    |       20      |
  |___________________|______________________|___________|_______________|

  Faça um programa que receba o preço atual e a venda mensal média do 
produto,calcule e mostre o novo preço.
*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	 
    float precoAtual, vendaMediaMensal;
    
  	system("cls");
  	printf("\nInforme o preco atual do produto:   ");
  	scanf("%f",&precoAtual);
  	printf("\nInforme a media mensal:  ");
  	scanf("%f",&vendaMediaMensal);
  	
  	
  	if(precoAtual <= 0){
  		printf("\nSeu estoque esta zerdo....\n");
  		
	  }else{
	  	if(vendaMediaMensal < 500){
	  		if(precoAtual < 30)
	  		precoAtual+= (precoAtual * 10)/100;		  
		  }
	  	else if(vendaMediaMensal >= 500 && vendaMediaMensal < 1200){
	  		 if(precoAtual >= 30 && precoAtual < 80)
	  		     precoAtual+= (precoAtual * 15)/100;
		  }
		  else
		     precoAtual-= (precoAtual * 20)/100;
	  }
	  
	  	
    printf("\nPreco Atual e:  %.2f",precoAtual);
  	
  	
  	getch();
  	return 0;
  }



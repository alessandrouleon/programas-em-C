/*21 Fa�a um programa que receba:
O c�digo do estado de origem da carga de um caminh�o, supondo que a 
digita��o do c�digo do estado seja sempre v�lida, ou seja, um n�mero 
inteiro entre 1 e 5;
O peso da carga do caminh�o em toneladas;
O c�digo da carga, supondo que a digita��o do c�digo da carga seja sempre 
v�lida, ou seja, um n�mero inteiro entre 10 e 40.

Tabelas:
     ____________________   ______________________
     |Codigo do|        |   |Codigo da|Preco po |
     | Estado  |Imposto |   | Carga   |  Quilo  |
     |---------|--------|   |---------|---------|
     |    1    |  35%   |   |10 a 20  |   100   |
     |    2    |  25%   |   |21 a 30  |   250   |
     |    3    |  15%   |   |31 a 40  |   340   |
     |    4    |   5%   |   |_________|_________|
     |    5    | isento |
     |_________|________|

Calcule e mostre:
O peso da carga do caminh�o convertido em quilos;
O pre�o da carga do caminh�o;
O valor do imposto, sabendo-se que o imposto � cobrado sobre o pre�o da
carga do caminh�o e que depende do estado de origem;
O valor total transportado pelo caminh�o, carga mais imposto.     
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	int cod_carg, cod_estado;
  	float toneladas, quilos, pre_carga, imp, valor_total;
  	
  	system("cls");
  	printf("Informe o codigo do estado numero valido entre 1 a 5:  ");
  	scanf("%i",&cod_estado);
  	printf("\nInforme o codigo da carga numero valido entre 10 a 40:  ");
  	scanf("%i",&cod_carg);
  	printf("Informe o peso da carga em toneladas:  ");
  	scanf("%f",&toneladas);
  	
  	
  	quilos = (toneladas * 1000);
  	printf("\nQuilos:  %.2f\n",quilos);
  	
  	if(cod_carg < 10 || cod_carg > 40){
  		printf("\nCodigo da carga invalido.\n");
	  }else{
	  	if(cod_estado < 1 || cod_estado > 5){
	  		printf("\nCodigo do pais invalido.\n");
		  }else{
		  	if(cod_carg <= 20)
		  	  pre_carga = (quilos * 100); 
  	        else if(pre_carga <= 30)
		  	       pre_carga = (quilos * 250);
		  	    else
				  pre_carga = (quilos * 340);
	    	
		    
			if(cod_estado == 1)
			  imp = (pre_carga * 35)/100; 
			else if(cod_estado == 2)
			       imp = (pre_carga * 25)/100;
				else if(cod_estado == 3)
				       imp = (pre_carga * 15)/100;
					else if(cod_estado == 4)
					       imp = (pre_carga * 5)/100;
					   else 
					     imp = 0;
    
	    valor_total = (pre_carga + imp);
  	    printf("\nValor da carga:  %.2f",pre_carga);
  	    printf("\nValor do imposto:  %.2f",imp);
  	    printf("\nValor total:  %.2f",valor_total);
            
			
	   }
    }
  		
  	getch();
  	return 0;
  }


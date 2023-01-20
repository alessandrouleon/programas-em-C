/*21 Fa�a um programa que receba:
O c�digo do estado de origem da carga de um caminh�o, supondo que a 
digita��o do c�digo do estado seja sempre v�lida, ou seja, um n�mero 
inteiro entre 1 e 5;
O peso da carga do caminh�o em toneladas;
O c�digo da carga, supondo que a digita��o do c�digo da carga seja sempre
v�lida,ou seja, um n�mero inteiro entre 10 e 40.

Tabelas:
   _____________________   _______________________
   |Codigo do|         |   |Codigo do | Preco por |
   | Estado  | Imposto |   |  Carga   |  Quilo    |
   |_________|_________|   |__________|___________|
   |    1    |   35%   |   |  10 a 20 |    100    |
   |    2    |   25%   |   |  21 a 30 |    250    |
   |    3    |   15%   |   |  31 a 40 |    340    |
   |    4    |    5%   |   |__________|___________|
   |    5    | Isento  |   
   |_________|_________|
   
Calcule e mostre:
peso da carga do caminh�o convertido em quilos;
pre�o da carga do caminh�o;
valor do imposto, sabendo-se que o imposto � cobrado sobre o pre�o da
carga do caminh�o e que depende do estado de origem;
valor total transportado pelo caminh�o, carga mais imposto.
   
*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


int main (){
  	
 float codEstado, toneladas, codCarga, quilos;
 float precoCarga, imposto, valorTotal;  
 	
  	system("cls");
  	printf("\nInforme o codigo do estado. \n");
  	scanf("%f", &codEstado);
  	printf("\nInforme o peso da carga em tonelada. \n");
  	scanf("%f",&toneladas);
  	printf("\nInforme o codigo da carga. \n");
  	scanf("%f",&codCarga);
  	
  	
  	if(codEstado <= 0 || codEstado > 5){
      printf("\nCodigo do estado invalido, escolha uma opcao entre 1 e 5, "
	         " e tente novamente.\n");
	  }else{
	  	if(codCarga < 10 || codCarga > 40){
	  	  printf("\nCodigo de carga invalido, ecolha uma opcao entre 10 e 40, "
                 "e tente novamente. \n");	
		  }else{
		  	
		  	quilos = (toneladas * 1000);
		    printf("\n  %.2f quilos \n",quilos);
			
			if(codEstado == 1){
				if(codCarga >= 10 && codCarga <=20){
				  precoCarga = (quilos * 100);	
				}
				else if(codCarga > 20 && codCarga <= 30){
                       precoCarga = (quilos * 250);	
				}
				else if(codCarga > 30 && codCarga <= 40){
					 precoCarga = (quilos * 340);
				}		
				
			imposto	= (precoCarga * 35)/100;
			valorTotal = (precoCarga + imposto);
				
			printf("\n Preco carga:  %.2f \n", precoCarga);
		    printf("\n Imposto :  %.2f \n", imposto);
			printf("\n valor total:  %.2f \n", valorTotal);	
			}	
		  
		   
		   //Codigo 2
		   if(codEstado == 2){
				if(codCarga >= 10 && codCarga <= 20){
				  precoCarga = (quilos * 100);	
				}
				else if(codCarga > 20 && codCarga <= 30){
                       precoCarga = (quilos * 250);	
				}
				else if(codCarga > 30 && codCarga <= 40){
					 precoCarga = (quilos * 340);
				}		
				
			imposto	= (precoCarga * 25)/100;
			valorTotal = (precoCarga + imposto);
				
			printf("\n Preco carga:  %.2f \n", precoCarga);
		    printf("\n Imposto :  %.2f \n", imposto);
			printf("\n valor total:  %.2f \n", valorTotal);	
			}	
		  
	    
	    
	    //Codigo 3
	    if(codEstado == 3){
				if(codCarga >= 10 && codCarga <=20){
				  precoCarga = (quilos * 100);	
				}
				else if(codCarga > 20 && codCarga <= 30){
                       precoCarga = (quilos * 250);	
				}
				else if(codCarga > 30 && codCarga <= 40){
					 precoCarga = (quilos * 340);
				}		
				
			imposto	= (precoCarga * 15)/100;
			valorTotal = (precoCarga + imposto);
				
			printf("\n Preco carga:  %.2f \n", precoCarga);
		    printf("\n Imposto :  %.2f \n", imposto);
			printf("\n valor total:  %.2f \n", valorTotal);	
			}
			
			
		//Codigo 4
		if(codEstado == 4){
				if(codCarga >= 10 && codCarga <=20){
				  precoCarga = (quilos * 100);	
				}
				else if(codCarga > 20 && codCarga <= 30){
                       precoCarga = (quilos * 250);	
				}
				else if(codCarga > 30 && codCarga <= 40){
					 precoCarga = (quilos * 340);
				}		
				
			imposto	= (precoCarga * 5)/100;
			valorTotal = (precoCarga + imposto);
				
			printf("\n Preco carga:  %.2f \n", precoCarga);
		    printf("\n Imposto :  %.2f \n", imposto);
			printf("\n valor total:  %.2f \n", valorTotal);	
			}	
		
		
		
		//Codigo 5
		if(codEstado == 5){
				if(codCarga >= 10 && codCarga <=20){
				  precoCarga = (quilos * 100);	
				}
				else if(codCarga > 20 && codCarga <= 30){
                       precoCarga = (quilos * 250);	
				}
				else if(codCarga > 30 && codCarga <= 40){
					 precoCarga = (quilos * 340);
				}		
				
			imposto	= (precoCarga * 0)/100;
			valorTotal = (precoCarga + imposto);
				
			printf("\n Preco carga:  %.2f \n", precoCarga);
		    printf("\n Imposto :  %.2f \n", imposto);
			printf("\n valor total:  %.2f \n", valorTotal);	
			}	
		
			
		  
		  }
	  }
	  
	  
  	getch();
  	return 0;
  }
















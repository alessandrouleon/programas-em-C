/*8 Fa�a um programa que mostre o menu de op��es a seguir, receba a op��o do
usu�rio e os dados necess�rios para executar cada opera��o.

Menu de op��es:
1 Somar dois n�meros
2 Raiz quadrada de um n�mero Digite a op��o desejada ->*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main (){
 	
 	int opcao;
 	float n1,n2, raiz_quad,calc_raiz;
 	system("cls");
 	printf("\n:::Menu de opcao ::::\n");
 	printf("1. Soma dois numeros.\n");
 	printf("2. Raiz quadrada de um numero.\n");
 	printf("\n");
 	
 	printf("\nDigite uma das opcaoes:  \n");
 	scanf("%i",&opcao);
 	
	 	
 if(opcao < 1 || opcao > 2){
 	  printf("\nOpcao invalida!\n");	
	 }else{
	  if(opcao == 1){
	  	printf("\nInforme dois numero a ser somados:\n");
	 	scanf("%f",&n1);
	 	scanf("%f",&n2);	
	 	printf("\nA soma e:  %.2f",n1+n2);
	  }
	  else{
  	   printf("\nDigite a opcao desejada\n");
	   scanf("%f",&raiz_quad);
	   calc_raiz = sqrt(raiz_quad);
	   printf("\nA raiz quadrada e:  %.2f",calc_raiz);
	  }	   	 	 	
    }
 	
 	getch();
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 /*if(opcao <= 0 || opcao > 2){
 	  printf("\nOpcao invalida!\n");	
	 }else{
	  if(opcao == 1){
	  	printf("\nInforme dois numero a ser somados:\n");
	 	scanf("%f",&n1);
	 	scanf("%f",&n2);	
	 	printf("\nA soma e:  %.2f",n1+n2);
	  }
	  else
	   printf("\nDigite a opcao desejada\n");
	   scanf("%f",&raiz_quad);
	   calc_raiz = sqrt(raiz_quad);
	   printf("\nA raiz quadrada e:  %.2f",calc_raiz);	 	 	
	 }
 	*/

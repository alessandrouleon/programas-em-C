/*8 Faça um programa que mostre o menu de opções a seguir, receba a opção do
usuário e os dados necessários para executar cada operação.

Menu de opções:
1 Somar dois números
2 Raiz quadrada de um número Digite a opção desejada ->*/

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

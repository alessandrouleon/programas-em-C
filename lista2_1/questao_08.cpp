/*8 Fa�a um programa que mostre o menu de op��es a seguir, receba a op��o 
do usu�rio e os dados necess�rios para executar cada opera��o.
Menu de op��es:
1 Somar dois n�meros
2 Raiz quadrada de um n�mero 
Digite a op��o desejada ->
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(){
  	
  	int opcao;
  	float n1,n2,raiz_quad;
  	
  	system("cls");
  	printf("Menu de Opcoes\n");
  	printf("1. Somar dois numero.\n");
  	printf("2. Raiz quadrada de um numero.\n");
  	printf("Digite a opcao desejada ->  ");
  	scanf("%i",&opcao);
  	
  	switch(opcao){
  		  case 1:
  		  	printf("\nDigite dois numeros.\n");
  		    scanf("%f",&n1);
  		    scanf("%f",&n2);
  		    printf("\nA soma dos dois numeros e:  %.2f\n",n1+n2);
         break;
         
         case 2:
         	printf("\nDigite um numero.\n");
         	scanf("%f",&n1);
         	raiz_quad = sqrt(n1);
         	printf("\nA raiz quadrada e:  %.2f\n",raiz_quad);
       	break;
       	
  		default:
  			printf("\nOpcao invalida, escolha uma das opcoes do menu.\n");
	  }
  	
  	getch();
  	return 0;
  }

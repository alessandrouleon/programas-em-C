/*18 Dados tr�s valores X, Y e Z, verificar se eles podem ser os 
comprimentos dos lados de um tri�ngulo e, se forem, verificar se � um 
tri�ngulo equil�tero, is�sceles ou escaleno. Se eles n�o formarem um 
tri�ngulo escrever uma mensagem. Considerar que:
O comprimento de cada lado de um tri�ngulo � menor que a soma dos outros 
dois lados;
Chama-se tri�ngulo equil�tero o tri�ngulo que tem tr�s lados iguais;
Chama-se tri�ngulo is�sceles o tri�ngulo que tem o comprimento de dois lados
iguais;
Chama-se tri�ngulo escaleno o tri�ngulo que tem os tr�s lados diferentes.*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  main(){
  	
  	
  	float x,y,z;
  	
  	system("cls");
  	printf("\nDigite o valor de x:  ");
  	scanf("%f",&x);
  	printf("\nDigite o valor de Y:  ");
  	scanf("%f",&y);
  	printf("\nDigite o valor de Z:  ");
  	scanf("%f",&z);
  	
  	
  	if((x < y+z) && (y < x+z) && (z < x+y)){
  		if((x == y) && (y == z))
  		  printf("\nTriangulo equilatero.\n"); 
  		else if((x==y) || (x==z) || (y==z))
  		       printf("\nTriangulo isosceles.\n");
  		    else
			  printf("\nTriangulo escaleno.\n");   
	  }
	  else
	     printf("\nOs dados informado nao forma um triangulo.\n");
  	
  	getch();
  
  }
  
  

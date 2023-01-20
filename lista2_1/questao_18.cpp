/*18 Dados três valores X, Y e Z, verificar se eles podem ser os 
comprimentos dos lados de um triângulo e, se forem, verificar se é um 
triângulo equilátero, isósceles ou escaleno. Se eles não formarem um 
triângulo escrever uma mensagem. Considerar que:
O comprimento de cada lado de um triângulo é menor que a soma dos outros 
dois lados;
Chama-se triângulo equilátero o triângulo que tem três lados iguais;
Chama-se triângulo isósceles o triângulo que tem o comprimento de dois lados
iguais;
Chama-se triângulo escaleno o triângulo que tem os três lados diferentes.*/


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
  
  

/*11. Fa�a um programa que receba um n�mero positivo e maior que zero,
calcule e mostre:
a) O n�mero digitado ao quadrado.
b) O n�mero digitado ao cubo.
c) A raiz quadrada do n�mero digitado.
d) A raiz c�bica do n�mero digitado.*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(){
  	
  	
  	float num, quadrado, cubo, raiz_quad, raiz_cub;
  	
  	system("cls");
  	printf("\nInforme o numero.\n");
  	scanf("%f",&num);
  	
  	quadrado = (num * num);
  	cubo = (quadrado * num);
  	raiz_quad = sqrt(num);
  	raiz_cub = pow(num,1.0/3.0);
  	
  	printf("\nNumero quadrado:  %.2f\n",quadrado);
  	printf("\nNumero cubo:  %.2f\n",cubo);
  	printf("\nRaiz quadrada:  %.2f\n",raiz_quad);
  	printf("\nRaiz cubica:  %.2f\n",raiz_cub);
  	
  	getch();
  	return 0;
  }

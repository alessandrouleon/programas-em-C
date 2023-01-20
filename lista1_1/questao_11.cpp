/*11. Faça um programa que receba um número positivo e maior que zero,
calcule e mostre:
a) O número digitado ao quadrado.
b) O número digitado ao cubo.
c) A raiz quadrada do número digitado.
d) A raiz cúbica do número digitado.*/


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

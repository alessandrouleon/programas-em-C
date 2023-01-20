/*11. Faça um programa que receba um número positivo e maior que zero,
calcule e mostre:
a) O número digitado ao quadrado.
b) O número digitado ao cubo.
c) A raiz quadrada do número digitado.
d) A raiz cúbica do número digitado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main (){
 	
    float num, quad, cubo, raiz_quad, raiz_cub;
    
	system("cls");
    
    printf ("Informe um numero:  ");
 	scanf ("%f",&num);
 	
 	if(num > 0){
      quad = (num *num);
 	  cubo = (quad * num);
 	  raiz_quad = sqrt(num);
 	  raiz_cub = cbrt(num);
 	
    printf ("\n");
 	printf ("\tNumero quadrado e:  %.2f\n", quad);
 	printf ("\tNumero cubo e:  %.2f\n", cubo);
 	printf ("\tRaiz quadrada e:  %.2f\n", raiz_quad);
 	printf ("\tRaiz cubica e:  %.2f\n", raiz_cub);	
	 }else{
	 	printf ("Opcao, invalida");
	 }
 	
 	
 	getch();
 }

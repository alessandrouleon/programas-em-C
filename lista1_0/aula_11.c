/*11. Fa�a um programa que receba um n�mero positivo e maior que zero,
calcule e mostre:
a) O n�mero digitado ao quadrado.
b) O n�mero digitado ao cubo.
c) A raiz quadrada do n�mero digitado.
d) A raiz c�bica do n�mero digitado.*/

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

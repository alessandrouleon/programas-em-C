/*12. Faça um programa que receba dois números maiores que zero, calcule e
mostre um elevado ao outro.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  main (){
  	
  	float n1, n2, v1, v2;
  	
  	system("cls");
  	
  	printf ("Informe dois, numeros:\n");
  	scanf ("%f", &n1);
  	scanf ("%f", &n2);
  	
  	v1 = pow(n1,n2);
  	v2= pow(n2,n1);
  	
  	printf ("valor n1: %.2f\n", v1);
  	printf ("valor n2: %.2f\n", v2);
  	
  	getch();
  }

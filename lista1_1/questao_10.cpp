/*10. Faça um programa que calcule e mostre a área de um círculo. Sabe-se
que:Area= : Area= 3.14 * r*r.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	float area, raio;
  	
  	system("cls");
  	printf("\nInforme o raio.\n");
  	scanf("%f",&raio);
	  
	area = 3.1415 * (raio * raio);				  			   	
  	printf("\nA area e:  %.4f\n",area);
  	
  	getch();
  	return 0;
  }

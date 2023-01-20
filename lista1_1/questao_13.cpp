/*13. Sabe-se que:
1 pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1760 jardas
Faça um programa que que receba uma medida em pés, faça a conversões a
seguir e mostre os resultados.
a) Polegadas;
b) Jardas;
c) Milhas.
d)*/

#include <iostream>
using namespace std;
#include <conio.h>
#include <string.h>
#include<stdlib.h>
#include <math.h>

  int main(){
  	
  	float pes, jardas, milhas;
  	
  	system("cls");
  	printf("\nInforme a medida em  pes.\n");
  	scanf("%f",&pes);
  	
  	pes *= 12;
  	jardas = (pes / 3);
  	milhas = (jardas / 1760);
  	
  	printf("\nPes :  %.2f\n",pes);
  	printf("\nJardas :  %.2f\n",jardas);
  	printf("\nMilhas :  %.2f\n",milhas);
  	
  	
  	getch();
  	return 0;
  }
  
  
  

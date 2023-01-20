/*18. Pedro comprou um saco de ração com peso em quilos. Ele possui dois 
gatos, para os quais fornece a quantidade de ração em gramas. A quantidade
diária de ração fornecida para cada gato é sempre a mesma. Faça um programa
que receba o peso do saco de ração e a quantidade de ração fornecida para 
cada gato, calcule e mostre quanto restará de ração no saco após cinco 
dias.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main (){
  	
  	float q_racao,gato1, gato2, resto;
  	
  	system("cls");
  	printf("\nInforme o quilo do saco de racao.\n");
  	scanf("%f",&q_racao);
  	
  	q_racao = q_racao * 1000;
  	  	
  	printf("\nInforme a quantidade de grama que alimento o gato 1.\n");
  	scanf("%f",&gato1);
  	printf("\nInforme a quantidade de grama que alimento o gato 2.\n");
  	scanf("%f",&gato2);
  	
  	q_racao -= (gato1+gato2)*5;	
    resto = q_racao / 1000;
  	
  	printf("\nQuilos restante e:  %.3f\n",resto);
  	getch();
  	return 0;
  }


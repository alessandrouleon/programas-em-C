/*18. Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para
os quais fornece a quantidade de ração em gramas. A quantidade diária de ração
fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso
do saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre
quanto restará de ração no saco após cinco dias.*/

#include <stdio.h>
#include <stdlib.h>

  main (){
  	
  	system("cls");
  	float quilo; 
    float grama1, grama2, res;
	  
	  printf ("\nInforme o peso em quilo da racao:  ");
	  scanf("%f",&quilo);
	  
	  quilo = quilo * 1000;
	  
	  printf ("\nInforme quatos grama retirou para o gato1: ");
	  scanf("%f",&grama1);
	  
	  printf ("\nInforme quatos grama retirou para o gato2: ");
	  scanf("%f",&grama2);
	  
	  quilo -= (grama1+grama2)*5;
	  res = quilo / 1000;
	   
	  printf ("\nquilos restantes %.3f", res); 
  	
  	
  	getch();
  }

/*15. O custo ao consumidor de um carro novo � a soma do pre�o de f�brica
com o percentual de lucro do distribuidor e dos impostos aplicados ao pre�o
de f�brica. Fa�a um programa que receba o pre�o de f�brica de um ve�culo,
o percentual de lucro do distribuidor e o percentual de impostos. Calcule e
mostre:
a) O valor correspondente ao lucro do distribuidor;
b) O valor correspondente aos impostos.
c) O pre�o final do ve�culo.
d)*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  main (){
 	
 	float precoFabr, percLucro, percImposto;
	float lucroDistr, imposto, precoFinal;
	
	printf ("Informe o preco de fabrica do carro:  ");
	scanf ("%f", &precoFabr);
	printf ("Informe o percentual de lucro do distribuidor: "); 
 	scanf ("%f", &percLucro);
 	printf("Informe o percentual de imposto:  ");
 	scanf ("%f", &percImposto);
 	
 	lucroDistr = (precoFabr * percLucro)/100;
 	imposto = (precoFabr * percImposto)/100;
 	precoFinal = (precoFabr+ lucroDistr + imposto);
 	
 	printf ("Lucro do distribuidor:  %.2f\n",lucroDistr);
 	printf ("Valor do imposto:  %.2f\n", imposto);
	printf ("Pre�o final do veiculo:  %.2f\n",precoFinal);
 	
 	getch();
 }

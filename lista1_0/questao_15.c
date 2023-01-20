/*15. O custo ao consumidor de um carro novo é a soma do preço de fábrica
com o percentual de lucro do distribuidor e dos impostos aplicados ao preço
de fábrica. Faça um programa que receba o preço de fábrica de um veículo,
o percentual de lucro do distribuidor e o percentual de impostos. Calcule e
mostre:
a) O valor correspondente ao lucro do distribuidor;
b) O valor correspondente aos impostos.
c) O preço final do veículo.
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
	printf ("Preço final do veiculo:  %.2f\n",precoFinal);
 	
 	getch();
 }

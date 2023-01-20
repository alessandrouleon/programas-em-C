/*16. Faça um programa que receba o número de horas trabalhadas e o valor
do salário mínimo. Calcule e mostre o salário a receber seguindo as regras
abaixo:
a) A hora trabalhada vale a metade do salário mínimo;
b) O salário bruto equivale ao número de horas trabalhadas multiplicado pelo
valor da hora trabalhada;
c) O imposto equivale a 3% do salário bruto.
d) O salário a receber equivale ao salário bruto menos o imposto.*/

#include <stdio.h>
#include <stdlib.h>

  main (){
  	
  	int horas;
  	float salMinimo, salBruto, horaTrab, imposto, salRec;
  	
  	printf("Informe as horas trabalhadas:  ");
  	scanf("%i", &horas);
  	printf ("Informe O salario minimo:  ");
  	scanf("%f", &salMinimo);
  	
  	horaTrab = (salMinimo / 2);
  	salBruto = (horas * horaTrab);
  	imposto = (salBruto * 3)/100;
  	salRec = (salBruto - imposto);
  	
  	printf ("O salario a receber e: %.2f", salRec);
  	
  	getch();
  }

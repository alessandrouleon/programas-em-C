/*16. Fa�a um programa que receba o n�mero de horas trabalhadas e o valor
do sal�rio m�nimo. Calcule e mostre o sal�rio a receber seguindo as regras
abaixo:
a) A hora trabalhada vale a metade do sal�rio m�nimo;
b) O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo
valor da hora trabalhada;
c) O imposto equivale a 3% do sal�rio bruto.
d) O sal�rio a receber equivale ao sal�rio bruto menos o imposto.*/

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

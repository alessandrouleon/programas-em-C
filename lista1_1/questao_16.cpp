/*16. Fa�a um programa que receba o n�mero de horas trabalhadas e o valor
do sal�rio m�nimo. Calcule e mostre o sal�rio a receber seguindo as regras
abaixo:
a) A hora trabalhada vale a metade do sal�rio m�nimo;
b) O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo
valor da hora trabalhada;
c) O imposto equivale a 3% do sal�rio bruto.
d) O sal�rio a receber equivale ao sal�rio bruto menos o imposto.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	float num_horas,val_horas,sal_mini,sal_bruto,imposto,sal_liqui;
	    
  	system("cls");
  	printf("\nInforme o numero de horas trabalhadas.\n");
  	scanf("%f",&num_horas);
  	printf("\nInforme o salario minimo.\n");
  	scanf("%f",&sal_mini);
  	
  	val_horas = (sal_mini / 2);
  	sal_bruto = (num_horas * val_horas);
  	imposto   = (sal_bruto * 3)/100;
    sal_liqui = (sal_bruto - imposto);
    
    printf("\nSalario liquido e:  %.2f\n",sal_liqui);
  	
  	getch();
  	return 0;
  }

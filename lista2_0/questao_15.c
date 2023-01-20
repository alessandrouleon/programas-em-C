/*15 Fa�a um programa que receba o valor do sal�rio m�nimo, o n�mero de 
horas trabalhadas, o n�mero de dependentes do funcion�rio e a quantidade de
horas extras trabalhadas. Calcule e mostre o sal�rio a receber do funcion�rio
de acordo com as regras a seguir:
O valor da hora trabalhada � igual a 1/5 do sal�rio m�nimo;
O sal�rio do m�s � igual ao n�mero de horas trabalhadas multiplicado pelo
valor da hora trabalhada;
Para cada dependente acrescentar R$32,00;
Para cada hora extra trabalhada calcular o valor da hora trabalhada 
acrescida de 50%;
O sal�rio bruto � igual ao sal�rio do m�s mais o valor dos dependentes mais
o valor das horas extras;
Calcular o valor do imposto de renda retido na fonte de acordo com a tabela
a seguir.

      IRRF      SALARIO BRUTO
     Isento   Inferior a R$200.00
	 10%      De R$200.00 ate R$500.00
	 20%      Superior a R$500.00

O sal�rio l�quido � igual ao sal�rio bruto menos IRRF;
A gratifica��o de acordo com a tabela a seguir.

    SALARIO LIQUIDO             GRATIFICACAO 
    Ate R$350.00                 R$100.00
    Superior a R$350.00          R$50.00
*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


  int main (){
  	 
  	float salMinimo, numHorasTrab, numDependente, quantHoraExtaTrab;
  	float valorHoraTrab, salMes,  quantDepen, salBruto, irrf, salLiquido;
  	
  	printf("\nInforme o salario do funcionario.\n");
  	scanf("%f",&salMinimo);
  	printf("\nInforme o numero de horas trabalhada.\n");
  	scanf("%f",&numHorasTrab);
  	printf("\nInforme a quantidade de dependente.\n");
  	scanf("%f",&numDependente);
  	printf("\nInforme a quantedade de horas extra trabalhadas.\n");
  	scanf("%f",&quantHoraExtaTrab);
  	
  	valorHoraTrab = (salMinimo/5);
  	salMes = (numHorasTrab * valorHoraTrab);
  	quantDepen = (numDependente * 32);
  	quantHoraExtaTrab *= valorHoraTrab + (valorHoraTrab * 50)/100;
  	salBruto = (salMes + numDependente + quantHoraExtaTrab);
  	
  	if(salBruto < 200){
  		printf("\nInsento\n");
	  }else{
	  	if(salBruto >= 200 && salBruto <= 500){
  		   irrf = (salBruto * 10)/100;
		  }else{
		  	irrf = (salBruto * 20)/100;
		  }
	  }
	  
	  salLiquido = (salBruto - irrf);
	  
	  if(salLiquido <= 350){
	  	salLiquido += 100;
	  }else{
	  	salLiquido += 50;
	  }
  	
  	printf("\ndependente:  %.1f\n",quantDepen);
  	printf("\nquantHoraExtaTrab:  %.1f\n",quantHoraExtaTrab);
  	printf("\nSalario Liquido %.2f\n",salLiquido);
  	
  	getch();
  	return 0;
  }














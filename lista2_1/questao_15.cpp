/*15 Fa�a um programa que receba o valor do sal�rio m�nimo, o n�mero de 
horas trabalhadas, o n�mero de dependentes do funcion�rio e a quantidade de
horas extras trabalhadas. Calcule e mostre o sal�rio a receber do 
funcion�rio de acordo com as regras a seguir:
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
  ___________________________________
  |  IRRF  |     Salario Bruto      |
  |--------|------------------------|
  |Isento  |Inferior a R$200.00     |
  | 10%    |De R$200.00 ate R$500.00|
  | 20%    |Superior a R$500.00     |
  |________|________________________|
    
O sal�rio l�quido � igual ao sal�rio bruto menos IRRF;
A gratifica��o de acordo com a tabela a seguir.  
  ___________________________________
  |  Salario Liquido  | Gratificacao|
  |-------------------|-------------|
  | Ate R$350.00      |    R$100    |
  |Superior a R$350.00|    R$50     |
  |___________________|_____________|
*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

 int main(){
 	 
 	 float sal_min, n_hora_trab, n_dep, n_hora_ext, v_hora_trab, sal_mes;
	 float v_dep, v_hora_ext, sal_bruto, irrf, sal_liq, grat;  
 	  
    system("cls");
    printf("\nInforme o salario minimo:  ");
 	scanf("%f",&sal_min);
 	printf("\nInforme o numeero de horas trabalhadas:  ");
 	scanf("%f",&n_hora_trab);
 	printf("\ninforme o numero de dependentes:  ");
 	scanf("%f",&n_dep);
 	printf("\nIforem o numero de horas extras trabalhadas:  ");
 	scanf("%f",&n_hora_ext);
 	
 	v_hora_trab = (sal_min * 1/5);
 	sal_mes = (n_hora_trab * v_hora_trab);
 	v_dep = (n_dep * 32);
 	v_hora_ext = n_hora_ext * (v_hora_trab + (v_hora_trab * 50)/100);
 	sal_bruto = (sal_mes+v_dep+v_hora_ext);
	 
 	   if(sal_bruto < 200)
 	      irrf = (sal_bruto * 0)/100;
 	   else if(sal_bruto <= 500)
 	          irrf = (sal_bruto * 10)/100;
 	        else
 	           irrf = (sal_bruto * 20)/100;
 	
 	sal_liq = (sal_bruto - irrf);
 	
 	if(sal_liq <= 350)
 	   grat = 100;
    else
       grat = 50;
 	    
 	sal_liq += grat;
 	printf("\nO salario a receber e:  %.2f\n",sal_liq);
 	
 	
 	getch();
 	return 0; 	
 }







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

   int main(){
   	
   	float p_fabr, p_distr, p_imp, vlr_dist, vlr_imp, vlr_final;
	   
	   system("cls");
	   printf("\nInforme o preco de fabrica.\n");  
       scanf("%f",&p_fabr);
   	   printf("\nInforme o percentual de lucro do distribuidor.\n");
   	   scanf("%f",&p_distr);
   	   printf("\nInforme o percentual de imposto.\n");
   	   scanf("%f",&p_imp);
   	   
   	    vlr_dist = (p_fabr * p_distr)/100;
   	    vlr_imp = (p_fabr * p_imp)/100;
   	    vlr_final= (p_fabr + vlr_dist + vlr_imp);
   	    
   	    printf("\nLucro distribuidor:  %.2f\n",vlr_dist);
   	    printf("\nLucro de impostos:  %.2f\n",vlr_imp);
   	    printf("\nValor final e:  %.2f\n",vlr_final);
   	   
   	getch();
   	return 0;
   }

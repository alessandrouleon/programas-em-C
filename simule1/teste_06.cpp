/*
1 ? Um funcion�rio de uma empresa recebe aumento salarial anualmente. Sabe-se que:
a) Esse funcion�rio foi contratado em 2005, com sal�rio inicial de R$ 1.000,00;
b) Em 2006 recebeu aumento de 1.5% sobre seu sal�rio inicial;
c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro
do percentual do ano anterior.
Fa�a um programa que determine o sal�rio atual desse funcion�rio.
 */
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    
   int ano_inicial, ano_atual;
   float sal, percentual, novo_perc;
   
   ano_inicial = 2005;
   sal = 1000; 
   percentual = 1.5; 
   novo_perc = 0;
   printf("\nInforme o ano atual:  ");
   scanf("%d",&ano_atual);
    
   while(ano_inicial < ano_atual){
       if(ano_atual == ano_inicial)
           sal = sal;
       else
        sal += (sal * percentual)/100; 
        percentual += percentual;
       
       ano_inicial++;  
   }
   printf("\n Novo salario:  %.2f\n",sal);

   system("pause");
   return 0;
}



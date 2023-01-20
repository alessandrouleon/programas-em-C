/*13 Fa�a um programa que apresente o menu de op��es a seguir, permita ao 
usu�rio escolher a op��o desejada, receba os dados necess�rios para 
executar a opera��o e mostre o resultado. Verifique a possibilidade de 
op��o inv�lida e n�o se preocupe com restri��es como sal�rio negativo.

Menu de op��es:
1 Imposto
2 Novo Sal�rio
3 Classifica��o
Digite a op��o desejada ->

Na op��o 1: receber o sal�rio de um funcion�rio, calcular e mostrar o valor
do imposto usando as regras a seguir:
   ___________________________________________________
   |       Salario        |    Percentual do Imposto |
   |----------------------|--------------------------|
   |Menor que R$500.00    |             5%           |
   |De R$500.00 a R$850.00|            10%           |
   |Acima de R$850.00     |            15%           | 
   |______________________|__________________________|
   
Na opcao 2: Receber o salario de um funcionario, calcular o valor do novo
salario, usando as regras a seguir.
   ____________________________________________________ 
   |            Salario               |    Aumento    |
   |----------------------------------|---------------|
   |Maiores que R$1.500.00            |    R$25.00    |
   |De R$750.00(inclusive)a R$1,500.00|    R$50.00    |
   |De R$450.00(inclusive)a R$750.00  |    R$75.00    |
   |Menores que R$450.00              |    R$100.00   |
   |__________________________________|_______________|
  
Na op��o 3: receber o sal�rio de um funcion�rio e mostrar sua classifica��o
usando a tabela a seguir:
   _____________________________________________
   |        Salario          |   Cassificacao  |  
   |Ate R$700.00(inclusive)  |  Mal remunerado |
   |MAiores que R$700.00     |  Bem remunerado |
   |_________________________|_________________|
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
   
   int main(){
   	
   	int opcao;
	float imp, sal, novo_sal; 
   	
   	system("cls");
   	printf("Menu de opcoes\n");
   	printf("1.Imposto\n");
   	printf("2.Novo Salario\n");
   	printf("3.Classificacao\n");
   	printf("Digite uma opcao -->  ");
   	scanf("%i",&opcao);
   	
    if(opcao == 1){
   	  printf("\nInforme o salario:  ");
   	  scanf("%f",&sal);
   	  if(sal < 500)
   	    imp = (sal*5)/100;
   	    else if(sal <= 850)
		   imp = (sal*10)/100;
		   else
		   imp = (sal*15)/100;
		printf("\nValor do imposto e:  %.2f\n",imp);   
	}
    
    else if(opcao == 2){
    	   printf("\nInforme o salario:  ");
   	       scanf("%f",&sal);
    	     if(sal > 1500)
    	       sal += 25;
             else if(sal >= 750)
                    sal += 50;
    	         else if(sal >= 450)
                        sal += 75;
                    else
 	                   sal += 100;
        printf("\nNovo salario e:  %.2f\n",sal);	 
	}
    
     else if(opcao == 3){
            printf("\nInforme o salario:  ");
            scanf("%f",&sal);
        if(sal <= 700)
          printf("\nMal remunerado.\n");
         else
           printf("\nBem remunerado.\n");
	 }
     
    else
      printf("\nOpcao invalida.\n");
   
   	getch();
   	return 0;
   }
  




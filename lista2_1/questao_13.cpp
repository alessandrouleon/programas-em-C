/*13 Faça um programa que apresente o menu de opções a seguir, permita ao 
usuário escolher a opção desejada, receba os dados necessários para 
executar a operação e mostre o resultado. Verifique a possibilidade de 
opção inválida e não se preocupe com restrições como salário negativo.

Menu de opções:
1 Imposto
2 Novo Salário
3 Classificação
Digite a opção desejada ->

Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor
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
  
Na opção 3: receber o salário de um funcionário e mostrar sua classificação
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
  




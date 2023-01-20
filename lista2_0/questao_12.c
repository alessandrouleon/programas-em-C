/*12 Faça um programa que receba o código correspondente ao cargo de
um funcionário e seu salário atual e mostre o cargo, o valor do aumento e 
seu novo salário. Os cargos estão na tabela a seguir.
 
  CODIGO     CARGO        PERCENTUA
    1       Escriturario     50%
	2       Secretario       35%
	3       Caixa            20%
	4       Gerente          10%
	5       Diretor   Nao tem aumento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main(){
    	
      int codigo;
	  float salario, aumento, novoSalario;
	  	
     printf("\nInforme o codigo do Funcionario\n");
	 scanf("%i",&codigo);
	 printf("\nInforme o Salario do funcionario.\n");
	 scanf("%f",&salario);
	 
	 if(codigo <= 0 && codigo > 5){
	 	printf("\nOpcao Invalida\n");
	 }
	 	
	   else if(codigo == 1){
	 	printf("\n::ESCRITUARIO::\n");
	 	aumento += ((salario * 50)/100);
	 	novoSalario += (salario + aumento);
	 	printf("\naumento %.2f\n",aumento);
	 	printf("\nNovo Salario: %.2f\n",novoSalario);
	 }
	 
	 else if(codigo == 2){
	 	printf("\n::SECRETARIO::\n");
	 	aumento += ((salario * 35)/100);
	 	novoSalario += (salario + aumento);
	 	printf("\naumento %.2f\n",aumento);
	 	printf("\nNovo Salario: %.2f\n",novoSalario);
	 }
	 
	 else if(codigo == 3){
	 	printf("\n::CAIXA::\n");
	 	aumento += ((salario * 20)/100);
	 	novoSalario += (salario + aumento);
	 	printf("\naumento %.2f\n",aumento);
	 	printf("\nNovo Salario: %.2f\n",novoSalario);
	 }
	 
	 else if(codigo == 4){
	 	printf("\n::GERENTE::\n");
	 	aumento += ((salario * 10)/100);
	 	novoSalario += (salario + aumento);
	 	printf("\naumento %.2f\n",aumento);
	 	printf("\nNovo Salario: %.2f\n",novoSalario);
	 }
	 
	 else if (codigo == 5){
	 	printf("\n::DIRENTOR::\n");
	 	printf("\Salario %.2f\n",salario);
	 	printf("\nDiretor nao tem aumento\n");
	 }
    
	 	
    	getch();
    	return 0;
	}









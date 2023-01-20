/*12 Faça um programa que receba o código correspondente ao cargo de um
funcionário e seu salário atual e mostre o cargo, o valor do aumento e seu
novo salário. Os cargos estão na tabela a seguir.
  _____________________________________
  |  Codigo |    Cargo    | Percentual|
  |---------|-------------|-----------|
  |    1    |Escriturario |    50%    |
  |    2    |Secretario   |    35%    |
  |    3    |Caixa        |    20%    |    
  |    4    |Gerente      |    10%    |
  |    5    |Diretor      |     0%    |
  |_________|_____________|___________|
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

   int main(){
   	
   	int codigo;
   	float salario, aumento, novo_salario;
   	
   	 system("cls");
   	 printf("\nINFORME UM UM NUMERO ENTRE 1 A 5.\n");
   	 printf("\nInforme o codigo.  ");
   	 scanf("%i",&codigo);
   	 printf("\nInforme o salario.  ");
   	 scanf("%f",&salario);
   	 
   	 switch(codigo){
   	 	  		 
   	 	case 1:
   	 		aumento = (salario * 50)/100;
   	 		novo_salario = (salario + aumento);
   	 		printf("\n CARGO: Escriturario.");
   	 		printf("\n AUMENTO:  %.2f",aumento);
   	 		printf("\n NOVO SALARIO:  %.2f",novo_salario);
 		break;
   	 	
   	 	case 2:
   	 		aumento = (salario * 35)/100;
   	 		novo_salario = (salario + aumento);
   	 		printf("\n CARGO: Secretario.");
   	 		printf("\n AUMENTO:  %.2f",aumento);
   	 		printf("\n NOVO SALARIO:  %.2f",novo_salario);
 		break;
   	 	
   	 	case 3:
   	 		aumento = (salario * 20)/100;
   	 		novo_salario = (salario + aumento);
   	 		printf("\n CARGO: Caixa.");
   	 		printf("\n AUMENTO:  %.2f",aumento);
   	 		printf("\n NOVO SALARIO:  %.2f",novo_salario);
 		break;
   	 	
   	 	case 4:
   	 		aumento = (salario * 10)/100;
   	 		novo_salario = (salario + aumento);
   	 		printf("\n CARGO: Gerente.");
   	 		printf("\n AUMENTO:  %.2f",aumento);
   	 		printf("\n NOVO SALARIO:  %.2f",novo_salario);
 		break;
   	 	
   	 	case 5:
   	 		aumento = (salario * 0)/100;
   	 		novo_salario = (salario + aumento);
   	 		printf("\n CARGO: Diretor.");
   	 		printf("\n AUMENTO:  %.2f",aumento);
   	 		printf("\n NOVO SALARIO:  %.2f",novo_salario);
 		break;
   	 	
   	 	default:
   	 		printf("\nOpcao invalida.\n");
		}
   	 	
   	getch();
   	return 0;
   }
   
   
   

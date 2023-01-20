/*5. Faça um programa que receba o salário de um funcionário e o percentual
de aumento, calcule e mostre o valor do aumento e o novo salário.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	float sal, perc, aum, novo_sal;
  	
  	system("cls");
  	printf("\nInforme o valor do salario.\n");
  	scanf("%f",&sal);
  	printf("\nIforme o percentua do aumento.\n");
  	scanf("%f",&perc);
  	
  	aum = (sal*perc)/100;
    novo_sal = (sal+aum);
    
    printf("\nAumento e:  %.2f \n",aum);
    printf("\nNovo salario e:  %.2f\n",novo_sal);
      	
  	getch();
  	return 0;
  }

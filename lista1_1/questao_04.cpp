/*4. Fa�a um programa que receba o sal�rio de um funcion�rio, calcule 
e mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%.*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

 int main (){
 	
 	float sal, novo_sal;
 	
 	system("cls");
 	printf("\nInforme o salario do funcionario.\n");
 	scanf("%f",&sal);
 	
 	novo_sal = (sal+(sal*25)/100);
 	
 	printf("\nNovo salario e:  %.2f\n",novo_sal);
 	
 	getch();
 	return 0;
 }

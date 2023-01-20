/*10 Faça um programa que determine a data cronologicamente maior de duas 
datas fornecidas pelo usuário. Cada data deve ser fornecida por três valores
inteiros, onde o primeiro representa o dia, o segundo o mês e o terceiro o
ano.*/

#include <stdio.h>
#include <stdlib.h>

 int main (){
 	
 	int ano1, mes1, dia1;
	int ano2, mes2, dia2;
	
	 system("cls");
	 printf("\nINFORME A PRIMEIRA DATA\n");
	 printf("\nInforme o dia:  ");
	 scanf("%i",&dia1);
	 printf("Informe o mes:  ");
	 scanf("%i",&mes1);
	 printf("Informe o ano:  "); 
 	 scanf("%i",&ano1);
 	 printf("\n");
 	 
 	 printf("\nINFORME A SEGUNDA DATA\n");
	 printf("Informe o dia:  ");
	 scanf("%i",&dia2);
	 printf("Informe o mes:  ");
	 scanf("%i",&mes2);
	 printf("Informe o ano:  "); 
 	 scanf("%i",&ano2);
 	
 if(ano1>ano2 || (ano1==ano2) && mes1>mes2 || (mes1==mes2) && dia1 > dia2)
 	printf("%i/%i/%i",dia1,mes1,ano1);
 	else if (ano1==ano2 && mes1==mes2 && dia1==dia2)
 	printf("\nAs datas sao iguais.");
 	else
 	printf("\nA segunda data e menor!\n");
	printf("%i/%i/%i",dia2,mes2,ano2);
 	
 	
 	getch();
 	return 0;
 }

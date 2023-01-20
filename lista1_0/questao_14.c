/*14. Faça um programa que receba o ano de nascimento de uma pessoa e o
ano atual. Calcule e mostre:
a) A idade dessa pessoa.
b) Quantos anos essa pessoa terá em 2050.*/

#include <conio.h>
#include <string.h>
#include<stdlib.h>
#include <math.h>

 main (){
 	
 	int anoNasc, anoAtual, idAtual, idFutura;
 	
 	printf ("Informe o ano de nascimento:  ");
 	scanf("%d", &anoNasc);
 	printf ("Informe o ano atual:  ");
 	scanf("%d", &anoAtual);
 	
 	idAtual = (anoAtual - anoNasc);
 	idFutura = (2050 - anoNasc);
 	
 	printf ("Idade atual:  %d\n", idAtual);
 	printf ("Idade futura: %d\n", idFutura);
 	
 	getch();
 }

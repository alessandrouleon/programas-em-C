/*17. Um trabalhador recebeu seu salário e depositou em sua contra corrente
bancária. Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo
atual. Sabe-se que cada operação bancária de retirada paga CPMF de 0,38%
e o saldo inicial da conta está zerado.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	float deposito, cheque1, cheque2, saldo;
  	
  	saldo = 00.00;
  	
  	system("cls");
  	printf("\nSaldo Inicial.  %.2f\n",saldo);
  	printf("\nInforme o valor do deposito.\n");
  	scanf("%f",&deposito);
  	
  	saldo = deposito;
  	
  	printf("\nInforme o valor do primeiro cheque1.\n");
  	scanf("%f",&cheque1);
  	saldo = (saldo - cheque1);
  	saldo -= (cheque1 * 0.38)/100;
  	
  	printf("\nInforme o valor do segundo cheque2.\n");
  	scanf("%f",&cheque2);
    saldo = (saldo - cheque2);
	saldo -= (cheque2 * 0.38)/100;
  	
  	printf("\nSaldo atual:  %.3f\n",saldo);
  	
  	
  	getch();
  	return 0;
  }


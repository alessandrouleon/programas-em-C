/*7. Um trabalhador recebeu seu salário e depositou em sua contra corrente
bancária. Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo
atual. Sabe-se que cada operação bancária de retirada paga CPMF de 0,38%
e o saldo inicial da conta está zerado.*/

#include <stdio.h>
#include <stdlib.h>

  main (){
  	
  	float saldo, deposito, cheque1, cheque2, cpmf1,cpmf2, novoSaldo, salFinal;
  	
  	system("cls");
  	

  	saldo = 000.00;
  	
  	printf("\n saldo atual:  %.2f\n", saldo);
  	
  	printf("\n Informe o valor do deposito:  ");
  	scanf("%f",&deposito);
  	printf("\n Informe o valor do primeiro cheque:  ");
  	scanf("%f",&cheque1);
  	
  	saldo = deposito;
  	
  	if (cheque1 < saldo){
  		novoSaldo = (saldo - cheque1);
  		cpmf1 = (cheque1 * 0.38)/100;
  		novoSaldo -= cpmf1;
      printf ("\nInforme o valor do segundo cheque:  ");
	  scanf("%f",&cheque2); 	  
	  }else{
	  	printf ("\nSaldo insuficiente:");
	  }

  	if (cheque2 < novoSaldo){
  		salFinal= (novoSaldo - cheque2);
  		cpmf2 = (cheque2 * 0.38)/100;
  		salFinal -= cpmf2;
	  }else{
	  	printf("\nSaldo Insuficiente:  ");
	  }
	  
	  printf ("\nSaldo Atual:  %.2f", salFinal);
	  
	  
  	getch();
  }

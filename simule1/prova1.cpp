#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

 int main(){
 	
 	int op;
 	float preco, novo_preco, parcela;
 	
 	system("cls");
 	printf("\nInforme o preco da etiqueta:  ");
 	scanf("%f",&preco);
 	
 	printf("\nMENU DE OPCOES\n");
 	printf("\n1. A vista ou cheque, 10 percentual de desconto.");
 	printf("\n2. A vista cartao de credito 15 percentual de desconto.");
 	printf("\n2. Parcelado em duas vezes, sem desconto.");
 	printf("\n4. Percelado em duas vezes, com Aumento de 10 de percentua.\n");
 	
 	printf("\nEscolha uma opcao:  ");
 	scanf("%i",&op);
 	
 	switch(op){
 		case 1:
 			novo_preco = preco - (preco*10)/100;
 		    printf("\nPreco a pagar:  %.2f\n",novo_preco);
 		    break;
        case 2:
 		    novo_preco = preco - (preco*15)/100;
 		    printf("\nPreco a pagar:  %.2f\n",novo_preco);
 		    break;
        case 3:
 		    parcela = preco /2;
 		    printf("\n1. Parcela.  %.2f",parcela);
 		    printf("\n2. Parcela.  %.2f",parcela);
 		    break;
        case 4:
        	novo_preco = preco + (preco*10)/100;
        	parcela = novo_preco /2;
 		    printf("\n1. Parcela.  %.2f",parcela);
 		    printf("\n2. Parcela.  %.2f",parcela);
        	break;        	
 		default:
 			printf("\nOpcao invalida.\n");
	 }
 	
 	
 	
 	getch();
 	return 0;
 }

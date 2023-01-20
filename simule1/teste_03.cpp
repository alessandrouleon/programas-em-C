/*1.Faça um programa para calcular e exibir o índice de massa
corporal (IMC)do usuário a partir do seu peso e de sua idade.
Exiba também o nível em que ela se encontra de acordo com a 
tabela abaixo.
IMC = peso/(altura x altura)
Antes de mais nada, peça a idade do usuário, pois este índice
não é preciso para crianças e pessoas idosas. Sendo assim, se
a idade não estiver na faixa de 12 a 60 anos então não 
calcule o índice e informe o motivo.
Níveis a serem exibidos de acordo com o IMC calculado:
< 18,5
Magreza
de 18,5 a menor que 25,0 Saudável
de 25,0 a menor que 30,0 Sobrepeso
de 30,0 a menor que 35,0 Obesidade Grau I
de 35,0 a menor que 40,0 Obesidade Grau II (severa)
maior ou igual a 40,0
Obesidade Grau III (mórbida)*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

   int main(){
   	
   	float idade, peso, altura, imc;
   	
   	system("cls");
   	printf("\nInforme a idade:  ");
    scanf("%f",&idade);
    
    if(idade < 12 || idade > 60)
      printf("\nIdade menor que 12 e maior que 60 nao calcula IMC. \n");
    else{
        printf("\nInforme o peso: ");
   	    scanf("%f",&peso);
   	    printf("\nInforme a altura:  ");
   	    scanf("%f",&altura);
   	
   	 imc = peso/(altura*altura);
   	 printf("\nindice de massa corporal e:  %.2f\n",imc);
   	  if(imc < 18.5)
		 printf("\nMagreza\n");
	  else if(imc < 25)
	     printf("\nSaldavel\n");
		else if(imc < 30)
		   printf("\nSobrepeso\n");
		  else if(imc < 35)
		     printf("\nObesidade Gral l\n");
			else if(imc < 40) 
               printf("\nObesidade Gral II (severa)\n");
		  	  else 
				printf("\nObesidade Gral lll (morbida)\n");	
	}  
   	
   
   		
   	getch();
   	return 0;
   }















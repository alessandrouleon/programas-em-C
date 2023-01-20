/*2 Faça um programa que receba três notas de um aluno, calcule e mostre a 
média aritmética e a mensagem que segue a tabela abaixo. Para alunos de 
exame, calcule e mostre a nota que deverá ser tirada no exame para 
aprovação, considerando que a média no exame é 6,00.
    _________________________________
    |                  |            |
	|Media Aritimetica |  Mensagem  |
	|__________________|____________|
	|  0.00 ate 2.99   | Reprovado  |
    |  3.00 ate 6.99   | Exame      |
    |  7.00 ate 10.00  | Aprovado   |
    |__________________|____________|
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main (){
  	
  	float n1,n2,n3,media, m_exame;
  	
  	system("cls");
  	printf("\nInforme as tre notas do aluno.\n");
  	scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    media = (n1+n2+n3)/3;
	 	
  	if (n1 < 0 || n2 < 0 || n3 < 0){
  		printf("\nNao e possivel calcular valor negativo.\n");
	  }else{ 	  
 	     if(media > 10){
     	    printf("\nMedia maior que 10, nao e calculada.\n");
	  }else{
	  	printf("\n A media e:  %.2f ",media);
  	      if(media < 3)
  	        printf(" Reprovado");	
		     else if(media < 7){
	     	   m_exame = (12 - media); 
               printf(" Exame");
               printf("\nPara ser aprovado deve tirar %.2f pontos.\n", m_exame);
			 } 
	  	      else
	            printf(" Aprovado");
	  }   	     
	      	
    }
  	
  	
  	getch();
  	return 0;
  }


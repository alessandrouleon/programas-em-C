/*2 Faça um programa que receba três notas de um aluno, calcule e mostre a média
aritmética e a mensagem que segue a tabela abaixo. Para alunos de exame, calcule e
mostre a nota que deverá ser tirada no exame para aprovação, considerando que a
média no exame é 6,00.
  
   MEDIA ARITIMETICA    MENSAGEM
      0.00 ate 2.99      Reprovado
	  3.00 ate 6.99      Exame
	  7.00 ate 10.00     Aprovado
*/

#include <stdio.h>
#include <stdlib.h>

 int main (){
  	
  	float n1, n2, n3, media;
  	
  	system("cls");
  	printf ("\nInforme as tres notas.\n");
  	scanf("%f",&n1);
  	scanf("%f",&n2);
  	scanf("%f",&n3);
  	
  	media = (n1+n2+n3)/3;
  	printf ("A media e:  %.2f  ", media);
  	
      if (media >= 0 && media < 3)		
  		printf ("Reprovado"); 		
     	 else if(media >= 3 && media < 7)
  		   printf ("Exame");
          
		  else
 	         printf("\nAprovado");

  	getch();
  	return 0;
  }
  
  

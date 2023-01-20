/*2 Faça um programa que receba três notas de um aluno, 
calcule e mostre a média aritmética e a mensagem que segue a
tabela abaixo. Para alunos de exame, calcule e mostre a nota
que deverá ser tirada no exame para aprovação, considerando 
que a média no exame é 6,00.*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main(){
  	
  	float n1,n2,n3,media,exame;
  	
  	system("cls");
  	printf("\nInforem as tres notas.\n");
  	scanf("%f %f %f",&n1,&n2,&n3);
  	
  	if(n1<0 || n2<0 || n3<0)
    printf("\nNao e possivel calcular valor negativo.\n");
  	else{
  		if(n1>10 || n2>10 || n3>10)
  		  printf("\nNota nao pode ser maior que 10.\n");
	    else{
	      media = (n1+n2+n3)/3;
		  printf("\nMedia e:  %.2f\n",media);
		  if(media<3)
		    printf("\nReprovado.\n");
		   else if(media<7){
		   	   printf("\nExame.\n");
		   	   exame = (12-media);
		   	   printf("\nAluno deve tirar no minimo: %.2f\n",exame);
		   }
		       
            else
               printf("\nAprovado.\n");
		}	  
	  }
  	
  	
  	
  	getch();
  	return 0;
  }

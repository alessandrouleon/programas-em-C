/*1 A nota final de um estudante é calculada a partir de três notas 
atribuídas respectivamente a um trabalho de laboratório, a uma avaliação
semestral e a um exame final. A média das três notas mencionadas 
anteriormente obedece aos pesos a seguir:
    ____________________________________
    |       Notas            |   Peso  |
    |________________________|_________|
    |Trabalho de laboratorio |    2    |
    |Avaliacao semestral     |    3    |
    |Exame final             |    5    |
    |________________________|_________|
    
Faça um programa que receba as três notas, calcule e mostre a média
ponderada e o conceito que segue a tabela abaixo:
    _____________________________
    |                |          |
    |Media ponderada | Conceito |
    |________________|__________|
    | 8.00 ate 10.00 |    A     |
    | 7.00 ate 7.99  |    B     |
    | 6.00 ate 6.99  |    C     |
    | 5.00 ate 5.99  |    D     |
    | 0.00 ate 4.99  |    E     |
    |________________|__________|  
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


  int main (){
  	
  	float n1,n2,n3,media;
  	
  	system("cls");
  	printf("\nDigite a nota do trabalho de laboratorio:  ");
  	scanf("%f",&n1);
  	printf("Digite a nota da avaliacao semestral:   ");
  	scanf("%f",&n2);
  	printf("Digite a nota do exame final:  ");
  	scanf("%f",&n3);
  	
  	n1 *= 2;
  	n2 *= 3;
  	n3 *= 5;	
  	media = (n1+n2+n3)/10;
    printf("\n A media ponderada e:  %.1f\n",media);
    
        if(media < 0){
        	printf("\nValores negativos nao pode ser calculado.\n");
		}else{
		   if(media < 5)
		     printf("\nConceito E\n");
            else if(media < 6)
               printf("\nConceito D\n");
                else if(media < 7)
                   printf("\nConceito C\n");
                     else if (media < 8)
                        printf("\nConceito B\n");
            else if(media <= 10)
               printf("\nConceito A\n");
	    else
           printf("\nMedia maior que 10 nao e calculada...\n");
		}
	  
	  
  	
  	getch();
  	return 0;
  }




















/*1 A nota final de um estudante é calculada a partir de três notas atribuídas
respectivamente a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas anteriormente obedece aos pesos a
seguir:
         NOTAS              PESO
    Trabalho de Laboratorio   2 
    Avaliacao Semestral       3
    Exame Final               5
Faça um programa que receba as três notas, calcule e mostre a média
ponderada e o conceito que segue a tabela abaixo:

    MEDIA PONDERADA   CONCEITO
	8.00 ate 10.00       A
	7.00 ate 7.99        B
	6.00 ate 6.99        C
	5.00 ate 5.99        D
	0.00 ate 4.99        E
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

  main (){
  	    
     	float n1, n2, n3, notas, media;
	     	
     	system("cls");
     	
     		printf("\nInforme as tres, notas:\n");
     		scanf("%f",&n1);
		    scanf("%f",&n2);
		    scanf("%f",&n3);
		    		    
		
		media = ((n1*2)+(n2*3)+(n3*5))/10; 
		   	    
	    printf ("\nA media do aluno e %.2f:\n",media);		    	
	        
			if (media >= 0 && media < 5)
			    printf ("\nConceito E:\n");
	         
            else if (media >= 5 && media < 6)
			   printf("\nConceito D:\n");	
			        
	        else if (media >= 6 && media < 7)
			   printf ("\nConceito C:\n");	
			 
		    else if (media >= 7 && media < 8)
			   printf ("\nConceito B:\n");	
			 
	else
		printf ("\nConceito A:\n");
	
		    
     	
  	getch();
   }

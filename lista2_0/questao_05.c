/*5 Faça um programa que receba três números obrigatoriamente em ordem e 
um quarto número que não siga esta regra. Mostre, em seguida, os quatro 
números em ordem decrescente.*/

#include <stdio.h>
#include <stdlib.h>

 int main (){
 	
 	float n1, n2, n3, n4;
	 
	 system("cls"); 
 	 printf ("\n Informe os tres numeros em ordem :\n");
 	 scanf("%f",&n1);
 	 scanf("%f",&n2);
 	 scanf("%f",&n3);
 	 printf("\n Informe o quarto numero nao ordenado: \n");
 	 scanf("%f",&n4);
     
    if(n1 < n2 && n1 < n3){
    	if (n2 < n3 && n4 < n1)
      	   printf("\n %.2f - %.2f - %.2f - %.2f \n",n3,n2,n1,n4);
	    else if(n1 < n2 && n1 < n3)
	    	 if(n2 < n3 && n4 < n2)
               printf("\n %.2f - %.2f - %.2f - %.2f \n",n3,n2,n4,n1);	
        else if(n1 < n2 && n1 < n3)
        	 if(n2 < n3 && n4 < n3)
      	       printf("\n %.2f - %.2f - %.2f - %.2f \n",n3,n4,n2,n1);	
		else if(n1 < n2 && n1 < n3)
        	 if(n2 < n3 && n4 > n3)
      	    printf("\n %.2f - %.2f - %.2f - %.2f \n",n4,n3,n2,n1);      	           
    } else{
    	  printf("\n %.2f - %.2f - %.2f - %.2f \n",n1,n2,n3,n4);
    }
     

	 getch();
 	return 0;
 }
 
 


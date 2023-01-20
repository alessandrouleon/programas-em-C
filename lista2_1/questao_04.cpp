//4.Faça um programa que receba três números e mostre-os em ordem crescente.

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

  int main (){
  	
  	int n1,n2,n3;
  	
  	system("cls");
  	printf("\nInforem os tres numeros.\n");
  	scanf("%i",&n1);
  	scanf("%i",&n2);
  	scanf("%i",&n3);
  	
  	if(n1 < n2 && n1 < n3)
	 if(n2 < n3)
       printf("\n %i %i %i \n",n1,n2,n3);
     else
       printf("\n %i %i %i \n",n1,n3,n2);
        else if(n2 < n1 && n2 < n3)
		     if(n1 < n3)
	           printf("\n %i %i %i \n",n2,n1,n3); 
             else
                printf("\n %i %i %i \n",n2,n3,n1);
             else if(n3 < n1 && n3 < n2)
                  if(n1 < n2)
                    printf("\n %i %i %i \n",n3,n1,n2);
                  else
                    printf("\n %i %i %i \n",n3,n2,n1);
        else
           printf("\n %i %i %i \n",n3,n2,n1);
	  
	
  	getch();
  	return 0;
  }

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main(){
 	
 	int x, y, z, op;
 	float media;
 	
 	system("cls");
 	printf("\nDigite as tres notas.\n");
 	scanf("%i%i%i",&x,&y,&z);
 	printf("\nEscolha uma opcao: ");
 	scanf("%i",&op);
 	
 	if((x< 0) || (y<0) || (z<0))
 	  printf("\nNota nao pode ser valor negativo..\n");
 	else{
 		switch(op){
 			case 1:
 			  if(x<1 && y<1 && z>0)
 			    media = exp(log(z)*1/3);
 			  else if(y<1 && z<1 && x>0)
 			    media = exp(log(x)*1/3);
		      else if(x<1 && z<1 && y>0)
		        media = exp(log(y)*1/3);
     	      else if(x>0 && y>0 && z<1)
			    media = exp(log(x*y)*1/3); 
 			  else if(y>0 && z>0 && x<1)
 			    media = exp(log(y*z)*1/3);
 			  else if(x>0 && z>0 && y<1)
			    media = exp(log(x*z)*1/3);	 
			  else if(x<1 && y<1 && z<1)
			   media = exp(log(x*y*z)*1/3);
		      else
			    media = exp(log(x*y*z)*1/3);   	  	   
                printf("\nMedia Geometrica e:  %.2f\n",media);  	 	    
				break;
			 case 2:
 				media = float((x*1)+(y*2)+(z*3))/6;
			    printf("\nMedia Ponderda e:  %.2f\n",media);
		        break;
		    case 3:
			   
			case 4:      
                media = (x+y+z)/3;
                printf("\nMedia Aritmetica e:  %.2f\n",media);
                break;
 			default:
 				printf("\nOpcao invalida..\n");
		 }	
	 }
 		
 	getch();
 	return 0;
 }


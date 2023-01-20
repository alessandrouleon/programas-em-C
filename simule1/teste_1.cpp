#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(){
  	
  	int x, y, z, op, aux;
  	float media;
  	
	system("cls");
  	printf("\nInforme as tres notas:\n");
  	scanf("%i",&x);
  	scanf("%i",&y);
  	scanf("%i",&z);
  	printf("\nEscolha uma opcao: ");
  	scanf("%i",&op);
  	
  	if((x < 0) || (y < 0) || (z < 0))
      printf("\nNota nao pode ser valor negativo...\n");
    else{
  	   switch(op){
  	   	    case 1: 	    						
				 if(x<1 && y<1)
					 media = exp(log(1*1*z)*1/3);
				 else if(y<1 && z<1)
					 media = exp(log(x*1*1)*1/3);	 
			     else if(x<1 && z<1)
					 media = exp(log(1*y*1)*1/3);		     
			     
				 else if(x>0 && y>0)
					 media = exp(log(x*y*1)*1/3);
				 else if(y>0 && z>0)
					 media = exp(log(1*y*z)*1/3);	 
				 else if(x>0 && z>0)
					 media = exp(log(x*1*z)*1/3);	 		 
				 
				 else			 
			    media = exp(log(x*y*z)*1/3);  	   	    	    
                printf("\nMedia Geometrica. %.2f\n",media);
			    break;
  	   	    case 2:
				media = float((x*1)+(y*2)+(z*3))/6;     
  	   	        printf("\nMedia Ponderada. %.2f\n",media);
  	   	        break;
  	   	    case 3:
  	   	    	if((x < 1) || (y < 1) || (z < 1))
  	   	    	   printf("\nPresta atencao Flamenguita.\n");
  	   	    	else{
  	   	    	media = 3/(((float)1/x)+((float)1/y)+((float)1/z));
				printf("\nMedia Harmonica. %.2f\n",media); 
			    }
				break;
			case 4:
				media = float(x+y+z)/3;
				printf("\nMedia Aritmetica. %.2f\n",media);
				break;     
  	   	default:
  	   		printf("\nOpcao invalida...\n");
	   }  	
	}
  	
  	getch();
  	return 0;
  }

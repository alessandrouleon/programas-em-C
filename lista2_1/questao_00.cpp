#include <stdio.h>
#include <stdlib.h>
   
  int main(){

    int i,j;
		
    for(i=2; i<=100; i++){
   	  int a=0;
        for(j=1; j<=100; j++){ 
            if(i% j==0) 
             a++;		      
          }
          if (a == 2)
             printf(" %d ", i);   
        }
 
 
   system("pause");
   return 0;
  }



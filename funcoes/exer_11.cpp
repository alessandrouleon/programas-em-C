/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

void vetores(int a[]){
    int j, b[5];
    
    for(j = 1; j <= a[j]; j++){
        b[j] = a[j];
        printf(" %d ",b[j]);
    }
}

int main(int argc, char** argv) {
    int i, a[5];
    
    for(i=1; i <= 5; i++){
       printf("Digite o %dº numero: ",i);   
       scanf("%d",&a[i]);       
    }
    vetores(a);
   
    return 0;
}
*/

/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

int fatorial_de_vetor(int a[]){
    int i, j, b[10], fat = 1;
    
    for(i = 1; i <= 10; i++){
        fat *= i;
    }
    for(j = 1; j <= 10; j++){
        b[j] = a[j];
    }
    return b[j];
}

int main(){
    int i, j, a[10], b[10];
    
    for(i = 1; i <= 10; i++){
        printf("Digite o %dº numero:  ",i);
        scanf("%d",&a[i]);
        b[i] = fatorial_de_vetor(a);
        printf(" %d ",b[i]);
    }
    
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
# define TAM 9

int main(){  
    int i, a[10] = {1,2,3,4,5,6,7,8,9,10};  
    for(i = 0; i <= TAM; i++){
        printf(" %d ",a[i]);
    }        
    return 0;
}
*/

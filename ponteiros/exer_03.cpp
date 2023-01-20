/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

void ponteiros(int *p);

int main(int argc, char** argv) {
    int a = 7;
    ponteiros(&a);
     printf("%d",a);
    return 0;
}

void ponteiros(int *p) {
    int a;
     printf("\nDigite um numero:  ");
     scanf("%d", &a);
     printf("%d\n",*p);
     *p = a;   
}
 */

/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

void ponteiros(int *p);

int main(int argc, char** argv) {
    int a = 7;
    ponteiros(&a);
     printf("%d",a);
    return 0;
}

void ponteiros(int *p) {
    int a;
     printf("\nDigite um numero:  ");
     scanf("%d", &a);
     printf("%d\n",*p);
     *p = a; 
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

void troca_valores(int *a, int *b);

int main(){
    
    int a = 27, b = 12;
    troca_valores(&a, &b);
    printf("a = %d, e B = %d ",a,b);
    
    return 0;
}

void troca_valores(int *a, int *b){
    int temp;
    printf("Valor *A: %d\n",*a);
    printf("Valor A: %d\n",a);
    printf("Valor *B: %d\n",*b);
    printf("Valor B: %d\n",b);
    
    temp = *a;
     printf("\ntemp %d",temp);
    *a = *b;
    printf("\n*a %d",*a);
    printf("\na %d",a);
    *b = temp;
     printf("\n*b %d",*b);
     printf("\nb %d\n",b);
}
 */

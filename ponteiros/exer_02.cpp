/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

void sem_retorno(int a){
    printf("\nDigite Um valor: ");
    scanf("%d",&a);
}

int main(int argc, char** argv) {
    int a = 0, r;
   sem_retorno(a);
    printf("%d\n",a);
   
    return 0;
}
 */

/*

#include <stdio.h>
#include <stdlib.h>

int inteiros();

int main() {
    int a = 0, *p;

    a = inteiros();
    p = &a;
    printf("%d", a);
    printf("\n%p",p);
    return 0;
}

int inteiros() {
    int a;
    printf("\nDigite um numero:  ");
    scanf("%d", &a);
    return a;
}
*/
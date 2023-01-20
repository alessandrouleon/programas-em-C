/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main() {

    unsigned seed; //numero usando para criar semente do gerador de numero aleatorio.
  
int i;

    printf("\nDigite um valor:  ");
    scanf("%u", &seed);
    srand(seed); //inicia gerador de numero aleatorio.

    for (i = 1; i <= 10; i++) {
        //escolhe numero aleatorio de 1 a 6 e os imprime. 
        printf("%d ", 1 + (rand() % 6));
        //se o contador e divisivel por 5 inicia nova linha de impressao..
        if (i % 5 == 0)
            printf("\n");
    }
    return 0;
}
*/



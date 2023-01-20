/*
 2. Faça uma função que receba dois números inteiros e positivos por parâmetro 
 e retorne a soma dos N números inteiros existentes entre eles. (2)
 */
/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

int total_soma(int x, int y) {
    int total = 0, aux = 0;
    if (x < 0 || y < 0)
        total = printf("\nNumeros negativo nao e valido\n");
    else if (x == 0 && y == 0)
       total =  printf("\nNao e possivel somar dois numeros nulos.\n");
    else if (x == y || (x+1) == y || (y+1) == x)
       total =  printf("\nNao existe valores a somar entre os numeros..\n");
    else if ((x + 1) < y) {
        x += 1;
        while (x < y) {
            aux += x;
            x++;
        }
        total = printf("Soma e: %d",aux);
    } else {
        y += 1;
        while (y < x) {
            aux += y;
            y++;
        }
        total = printf("Soma e: %d",aux);
    }
    return total;
}

int main() {
    int x, y, r;
    printf("\nDigite dois numero:\n");
    scanf("%d %d", &x, &y);
    r = total_soma(x, y);
    printf(" ",(r));

    return 0;
}

*/

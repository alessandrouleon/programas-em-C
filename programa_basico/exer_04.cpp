/*Fincao*/
/*
#include <cstdlib>
#include <stdio.h>
#include <math.h>
using namespace std;

int maximum(int x, int y, int z);

int main() {

    int n1, n2, n3;
    printf("\nDigite o tres valores:\n");
    scanf("%d %d %d", &n1, &n2, &n3);


    printf("\nMaximo e %d ", maximum(n1, n2, n3));

    return 0;
}

int maximum(int x, int y, int z) {

    int aux;
    if (x > y && x > z) {
        if (y > z)
            aux = x;
        else
            aux = x;
    }
    else if (y > x && y > z) {
        if (x > z)
            aux = y;
        else
            aux = y;
    }
    else if (z > x && z > y) {
        if (x > y)
            aux = z;
        else
            aux = z;
    }
    return aux;
}
*/

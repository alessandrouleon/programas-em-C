/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv) {

    int i, cont = 0, n;
    printf("\nDigite o valor de N: ");
    scanf("%d", &n);

    int primo[n];

    if (n <= 0)
        printf("\nOpcao invalida.");
    else {
        for (i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                if(i % 3 == 0)
               printf(" %d ",i);  
            } 
        }
       
    }
    
    return 0;
}
 */

/*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int func_crivo(int n, int vetor[]) {
    int i, j;
    for (i = 2; i <= n; i++)
        vetor[i] = 1;
    i = 2;
    while (i * i <= n) {
        for (j = i + 1; j <= n; j++)
            if (vetor[j] != 0 && j % i == 0)
                vetor[j] = 0;
        for (j = i + 1; vetor[j] == 0 && j <= n; j++);
        i = j;
    }
}

int main() {
    int i, j, n;
    printf("Digite o limite superior: ");
    scanf("%d", &n);
    int vetor[n];
    func_crivo(n, vetor);
    for (i = 2; i <= n; i++)
        if (vetor[i] != 0)
            printf(" %d ", i);
    return 0;
}
 
*/

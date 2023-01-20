/*
 10. Crie uma sub-rotina que receba como parâmetro um vetor de dez elementos 
 inteiros positivos e mostre em outro vetor o valor do fatorial de cada elemento
 do primeiro vetor. (13)
 */
/*
#include <stdlib.h>
#include <stdio.h>

int fat_de_vetor(int aux);

int main() {
    int i, j, vetor_a[10], vetor_b[10];

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &vetor_a[i]);
        vetor_a[i] = i;
    }
    for (i = 1; i <= vetor_a[i]; i++) {
        vetor_b[i] = fat_de_vetor(vetor_a[i]);
        printf(" %d \n", vetor_b[i]);
    }
    return 0;
}

int fat_de_vetor(int aux) {
    int fat = 1;
    while (aux > 1) {
        fat *= aux;
        aux--;
    }
    return fat;
}
 */

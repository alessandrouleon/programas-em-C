/*1) Faça um programa que preencha um vetor com nove números inteiros, calcule e
mostre os números primos e suas respectivas posições.
 */

/*
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main() {

    int i, j, cont, vet[100];

    for (i = 0; i < 100; i++) {
        printf("Digite a posicao [%d]  o valor:  ", i);
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < 9; i++) {
        cont = 0; 
        for (j = 1; j <= vet[i]; j++) {
            if ((vet[i] % j) == 0)
                cont++; 
        }
       
        if (cont == 2)
           printf("\nposica [%d] valor %d ", i, vet[i]);

    }

    return 0;
}

 */ 






/*

#include <stdio.h>
#include <stdlib.h>
#define TAM 9

void preenche_vetor(int *vetor);
void encontra_os_N_primos(int *vetor);

int main() {

    int vetor[TAM];
    preenche_vetor(vetor);
    encontra_os_N_primos(vetor);
    return 0;
}

void preenche_vetor(int *vetor) {
    int i;
    for (i = 0; i < 9; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void encontra_os_N_primos(int *vetor) {
    int i, j, cont;
    for (i = 0; i < 9; i++) {
        cont = 0;
        for (j = 1; j <= vetor[i]; j++) {
            if ((vetor[i] % j) == 0)
                cont++;
        }
        if (cont == 2)
            printf("\nPosicao [%d] Valor %d ", i, vetor[i]);
    }

}
 */

/*
#include <stdio.h>
#include <stdlib.h>
#define TAM 9

void preenche_vetor(int *vetor);
int encontra_primos(int *vetor);

int main() {
    int aux2 = 0, vetor[TAM];
    preenche_vetor(vetor);
    aux2 = encontra_primos(vetor);
    printf(" ",aux2);
    return 0;
}

void preenche_vetor(int *vetor) {
    int i;
    for (i = 0; i < 9; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

int encontra_primos(int *vetor) {
    int i, j, cont, aux2, x = 0;
    for (i = 0; i < 9; i++) {
        cont = 0;
        for(j=1; j<= vetor[i]; j++){
            if((vetor[i] % j) == 0)
            cont++;    
        }
        if(cont == 2)
            aux2  = printf(" \nPosicao %d Valor %d",i, vetor[i]);
    }
    return aux2;
}
 */

/*
#include <stdio.h>
#include <stdlib.h>
#define TAM 9

void preenchendo_vetor(int *vetor);
int acha_primos(int *vetor);

int main() {
    int aux = 0, vetor[TAM];
    preenchendo_vetor(vetor);
    aux = acha_primos(vetor);
    printf(" ", aux);
    return 0;
}

void preenchendo_vetor(int *vetor) {
    int i = 0;
    do {
        printf("Digite o %dº valor: ", (i + 1));
        scanf("%d", &vetor[i]);
        i++;
    } while (i < 9);

}

int acha_primos(int *vetor) {
    int i = 0, j = 1, cont, aux;
    while (i < 9) {
        cont = 0;
        for (j = 1; j <= vetor[i]; j++) {
            if ((vetor[i] % j) == 0)
                cont++;
        }
        if (cont == 2)
            aux = printf("\nPosicao %d Valor %d ", i, vetor[i]);
        i++;
    }
    return aux;
}
*/ 






//#include <stdio.h>
//#include <stdlib.h>
//#define TAM 10
//
//int preenche_vetor(int *V);
//void exibe_primos(int *V);
//
//
//int main(){
//    int V[TAM];
//    preenche_vetor(V);
//    exibe_primos(V);
//    return 0;
//}
//
//int preenche_vetor(int *V){
//    int i;
//    for(i = 0; i  < TAM; i++){
//        printf("Digite o %d valor do vetor: ", i+1);
//        scanf("%d",&V[i]);
//    }
//    return V[TAM];
//}
//
//
//void exibe_primos(int *V){
//    int i, j, cont;
//    printf("\n\nEXIBINDO PRIMOS\n");
//    for(i = 0; i < TAM; i++){
//        cont =0;
//        for(j = 1; j <= V[i]; j++){
//            if((V[i] % j) == 0)
//                cont++;
//        }
//        if(cont == 2)
//            printf("Posicao [%d] Valor %d \n",i, V[i]);
//    }
//}
//
// 
//
